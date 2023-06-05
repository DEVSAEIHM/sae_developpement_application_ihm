#include "lecteurmodele.h"
#include <QDebug>
LecteurModele::LecteurModele(UnMode m, QObject *parent) :
    QObject{parent}, _mode(m)
{
    _mode = UnMode::mManuel;
}

void LecteurModele::lancerDiaporama()
{
    _mode = UnMode::mAuto;
    qDebug() << "action lancer le diaporama";
}

void LecteurModele::arreterDiaporama()
{
    _mode = UnMode::mManuel;
    qDebug() << "action arreter le diaporama";
}

void LecteurModele::allerImgSuivante()
{
    _mode = UnMode::mManuel;
    qDebug() << "action aller à l'image suivante";
}

void LecteurModele::allerImgPrecedente()
{
    _mode = UnMode::mManuel;
    qDebug() << "action aller à l'image précédente";
}

LecteurModele::UnMode LecteurModele::getMode()
{
    return _mode;
}
