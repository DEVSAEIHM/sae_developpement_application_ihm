#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <cstring>

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    _scene = new QGraphicsScene(ui->imgVue);
    _message = new LecteurMessage(this);
    _modele = new LecteurModele;
    _item = new QGraphicsPixmapItem;
    _timer = new QTimer(this);
    _speed = 2000;
    ui->imgVue->setScene(_scene);

    chargerImage();
    setMode(QString(tr("Manuel")));
    ui->statusbar->showMessage(tr("mode : Manuel             images : "));

    demandeMajIntitule();
    demandeMajNomImage();

    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(demandeLancer()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(demandeArreter()));
    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(demandeSuivant()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(demandePrecedent()));

    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(demandeMajStatusBar()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(demandeMajStatusBar()));

    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(demandeMajNomImage()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(demandeMajNomImage()));

    connect(ui->action_Quitter,SIGNAL(triggered()),QCoreApplication::instance(),SLOT(quit()));
    connect(ui->actionA_propos_de,SIGNAL(triggered()),_message,SLOT(exec()));

    connect(_timer,SIGNAL(timeout()),this,SLOT(demandeImageSuivante()));
    connect(_timer,SIGNAL(timeout()),this,SLOT(demandeMajNomImage()));
    connect(_timer,SIGNAL(timeout()),this,SLOT(demandeMajStatusBar()));
}

void LecteurVue::chargerImage()
{
    if (_scene->items().isEmpty() == false)
    {
        _scene->removeItem(_item);
    }
    QImage imgActuelle(QString::fromStdString(_modele->imageCourante()->getChemin()));
    _item = new QGraphicsPixmapItem(QPixmap::fromImage(imgActuelle));
    _scene->addItem(_item);
}

void LecteurVue::demandeImageSuivante()
{
    _modele->avancer();
    chargerImage();
}

void LecteurVue::demandeImagePrecedente()
{
    _modele->reculer();
    chargerImage();
}

void LecteurVue::demandeLancer()
{
    qDebug() << "demandeLancer" << getMode();
    _modele->changerDiaporama(1);
    chargerImage();
    if (getMode() == QString(tr("Manuel")))
    {
        demandeMajMode();
    }
    demandeMajNomImage();
    demandeMajStatusBar();
    ui->btnArreter->setEnabled(true);
    _timer->start(_speed);
}

void LecteurVue::demandeArreter()
{
    qDebug() << "demandeArreter" << getMode();
    ui->btnArreter->setEnabled(false);
    _timer->stop();
    demandeMajMode();
    demandeMajStatusBar();
}

void LecteurVue::demandeSuivant()
{
    getMode() == QString(tr("Auto")) ? demandeArreter() : demandeImageSuivante();
}

void LecteurVue::demandePrecedent()
{
    getMode() == QString(tr("Auto")) ? demandeArreter() : demandeImagePrecedente();
}

void LecteurVue::demandeMajMode()
{
    QString manuelMode(tr("Manuel"));
    getMode() == manuelMode ? setMode(QString(tr("Auto"))) : setMode(QString(tr("Manuel")));
}

void LecteurVue::setMode(QString m)
{
    _mode = m;
}

QString LecteurVue::getMode() const
{
    return _mode;
}

void LecteurVue::demandeMajIntitule()
{
    QString numDiapo = QString::number(_modele->numDiaporamaCourant());
    ui->intitule->setText(ui->intitule->text() + numDiapo);
}

void LecteurVue::demandeMajNomImage()
{
    QString nomImage = QString::fromStdString(_modele->imageCourante()->getTitre());
    ui->imgTitre->setText(tr("image : ") + nomImage);
}

void LecteurVue::demandeMajStatusBar()
{
    int rangImg = _modele->imageCourante()->getRang();
    int nbImg = _modele->nbImages();
    QString rangImgStr = QString::number(rangImg);
    QString nbImgStr = QString::number(nbImg);
    ui->statusbar->showMessage(tr("mode : ") + getMode() + tr("             images : ") + rangImgStr + tr(" / ") + nbImgStr);
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

