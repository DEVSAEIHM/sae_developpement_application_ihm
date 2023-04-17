#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

    (*this).apropos = new QMessageBox();
    (*this).apropos->setWindowTitle(tr("A propos de..."));
    (*this).apropos->setText(
        tr("Version : 2.0 \nDate de création : 17/04/2023 \nAuteurs : Damageux, Dirchaoui, Laborde")
    );

    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(lancerDiaporama()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(arreterDiaporama()));
    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(allerImgSuivante()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(allerImgPrecedente()));
    connect(ui->action_Quitter,SIGNAL(triggered()),QCoreApplication::instance(),SLOT(quit()));
    connect(ui->actionA_propos_de,SIGNAL(triggered()),(*this).apropos,SLOT(show()));
}

void LecteurVue::lancerDiaporama()
{
    qDebug() << "action lancer le diaporama";
}

void LecteurVue::arreterDiaporama()
{
    qDebug() << "action arreter le diaporama";
}

void LecteurVue::allerImgSuivante()
{
    qDebug() << "action aller à l'image suivante";
}

void LecteurVue::allerImgPrecedente()
{
    qDebug() << "action aller à l'image précédente";
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

