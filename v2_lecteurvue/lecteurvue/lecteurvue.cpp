#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(lancerDiaporama()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(arreterDiaporama()));
    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(allerImgSuivante()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(allerImgPrecedente()));
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

