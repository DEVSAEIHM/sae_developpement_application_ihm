#include "lecteurpresentation.h"
#include "lecteurvue.h"
#include <QDebug>

LecteurPresentation::LecteurPresentation(QObject *parent) :
    QObject(parent)
{

}

LecteurModele *LecteurPresentation::getModele()
{
    return _modele;
}

LecteurVue *LecteurPresentation::getVue()
{
    return _vue;
}

void LecteurPresentation::setModele(LecteurModele *m)
{
    _modele = m;
}

void LecteurPresentation::setVue(LecteurVue *v)
{
    _vue = v;
}

void LecteurPresentation::demandeLancerDiaporama()
{
    _modele->lancerDiaporama();
    _vue->majMode(_modele->getMode());
}

void LecteurPresentation::demandeArreterDiaporama()
{
    _modele->arreterDiaporama();
    _vue->majMode(_modele->getMode());
}

void LecteurPresentation::demandeAllerImgSuivante()
{
    _modele->allerImgSuivante();
    _vue->majMode(_modele->getMode());
}

void LecteurPresentation::demandeAllerImgPrecedente()
{
    _modele->allerImgPrecedente();
    _vue->majMode(_modele->getMode());
}
