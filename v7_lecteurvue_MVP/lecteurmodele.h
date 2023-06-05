#ifndef LECTEURMODELE_H
#define LECTEURMODELE_H
#include <QObject>

class LecteurModele : public QObject
{
    Q_OBJECT
public:
    enum UnMode {mAuto, mManuel};
    explicit LecteurModele(UnMode m=mManuel, QObject *parent = nullptr);
    void lancerDiaporama(); // Lance le diaporama en mode automatique
    void arreterDiaporama(); // Arrête le diaporama et repasse en mode manuel
    void allerImgSuivante(); // Passe à l'image suivante
    void allerImgPrecedente(); // Passe à l'image précédente
    UnMode getMode(); // retourne le mode en cours
private:
    UnMode _mode; // Le mode de lecture du diaporama
};

#endif // LECTEURMODELE_H
