#ifndef LECTEURVUE_H
#define LECTEURVUE_H
#include "lecteurmodele.h"
#include "lecteurpresentation.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurPresentation;
class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();
    LecteurPresentation *getPresentation(); // retourne la présentation
    void setPresentation(LecteurPresentation *p); // lie une présentation à la vue
    void majMode(LecteurModele::UnMode m); // Met à jour l'interface en fonction du mode
private:
    Ui::LecteurVue *ui;
    LecteurPresentation *_presentation;
private slots:
    void demandeLancerDiaporama(); // appelle la méthode demandeLancerDiaporama() de la présentation
    void demandeArreterDiaporama(); // appelle la méthode demandeArreterDiaporama() de la présentation
    void demandeAllerImgSuivante(); // appelle la méthode demandeAllerImgSuivante() de la présentation
    void demandeAllerImgPrecedente(); // appelle la méthode demandeAllerImgPrecedente() de la présentation
};
#endif // LECTEURVUE_H
