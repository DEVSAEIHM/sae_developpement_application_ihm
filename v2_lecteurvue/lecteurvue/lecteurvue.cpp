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
    ui->imgVue->setScene(_scene);

    chargerImage();
    demandeMajStatusBar();
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

void LecteurVue::demandeLancer()
{
    qDebug() << "demandeLancer";
}

void LecteurVue::demandeArreter()
{
    qDebug() << "demandeArreter";
}

void LecteurVue::demandeSuivant()
{
    qDebug() << "demandeSuivant";
    _modele->avancer();
    chargerImage();
}

void LecteurVue::demandePrecedent()
{
    qDebug() << "demandePrecedent";
    _modele->reculer();
    chargerImage();
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
    ui->statusbar->showMessage(tr("images : ") + rangImgStr + tr(" / ") + nbImgStr);
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

