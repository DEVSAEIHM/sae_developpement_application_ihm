#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteurmessage.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    apropos = new LecteurMessage(this);

    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(lancerDiaporama()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(arreterDiaporama()));
    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(allerImgSuivante()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(allerImgPrecedente()));
    connect(ui->action_Quitter,SIGNAL(triggered()),QCoreApplication::instance(),SLOT(quit()));
    connect(ui->actionA_propos_de,SIGNAL(triggered()),apropos,SLOT(exec()));
}

void LecteurVue::lancerDiaporama()
{
    qDebug() << "action lancer le diaporama";
    ui->statusbar->showMessage(tr("Lecture en mode auto"));
}

void LecteurVue::arreterDiaporama()
{
    qDebug() << "action arreter le diaporama";
    ui->statusbar->showMessage(tr("Arrêt mode auto"));
}

void LecteurVue::allerImgSuivante()
{
    qDebug() << "action aller à l'image suivante";
    ui->statusbar->showMessage(tr(""));
}

void LecteurVue::allerImgPrecedente()
{
    qDebug() << "action aller à l'image précédente";
    ui->statusbar->showMessage(tr(""));
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

