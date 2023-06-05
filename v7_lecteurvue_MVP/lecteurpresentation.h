#ifndef LECTEURPRESENTATION_H
#define LECTEURPRESENTATION_H
#include "lecteurmodele.h"
class LecteurVue;

class LecteurPresentation : public QObject
{
    Q_OBJECT
public:
    explicit LecteurPresentation(QObject *parent = nullptr);
    LecteurModele *getModele(); // Retourne le modele
    LecteurVue *getVue(); // retourne le vue
    void setModele(LecteurModele *m); // lie un modele à la présentation
    void setVue(LecteurVue *v); // lie une vue à la présentation
public slots:
    void demandeLancerDiaporama(); // appelle la méthode lancerDiaporama() du modele
    void demandeArreterDiaporama(); // appelle la méthode arreterDiaporama() du modele
    void demandeAllerImgSuivante(); // appelle la méthode allerImgSuivante() du modele
    void demandeAllerImgPrecedente(); // appelle la méthode allerImgPrecedente() du modele
private:
    LecteurModele *_modele;
    LecteurVue *_vue;
};

#endif // LECTEURPRESENTATION_H
