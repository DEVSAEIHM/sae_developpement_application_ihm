#include "lecteurvue.h"
#include "ui_lecteurvue.h"

LecteurVue::LecteurVue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    connect(ui->btnLancer,SIGNAL(clicked()),this,SLOT(demandeLancerDiaporama()));
    connect(ui->btnArreter,SIGNAL(clicked()),this,SLOT(demandeArreterDiaporama()));
    connect(ui->btnSuivant,SIGNAL(clicked()),this,SLOT(demandeAllerImgSuivante()));
    connect(ui->btnPrecedent,SIGNAL(clicked()),this,SLOT(demandeAllerImgPrecedente()));
}

LecteurPresentation *LecteurVue::getPresentation()
{
    return _presentation;
}

void LecteurVue::setPresentation(LecteurPresentation *p)
{
    _presentation = p;
}

void LecteurVue::demandeLancerDiaporama()
{
    _presentation->demandeLancerDiaporama();
}

void LecteurVue::demandeArreterDiaporama()
{
    _presentation->demandeArreterDiaporama();
}

void LecteurVue::demandeAllerImgSuivante()
{
    _presentation->demandeAllerImgSuivante();
}

void LecteurVue::demandeAllerImgPrecedente()
{
    _presentation->demandeAllerImgPrecedente();
}

void LecteurVue::majMode(LecteurModele::UnMode m)
{
    switch (m) {
    case LecteurModele::mAuto:
        ui->btnArreter->setEnabled(true);
        break;
    case LecteurModele::mManuel:
        ui->btnArreter->setEnabled(false);
        break;
    default: break;
    }
}

LecteurVue::~LecteurVue()
{
    delete ui;
}

