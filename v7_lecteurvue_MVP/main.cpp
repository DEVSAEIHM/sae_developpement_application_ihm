#include "lecteurvue.h"
#include "lecteurpresentation.h"
#include "lecteurmodele.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // Création du modèle
    LecteurModele *m = new LecteurModele;
    // Création de la présentation
    LecteurPresentation *p = new LecteurPresentation;
    // Création de la vue
    LecteurVue v;
    // Pointer la présentation vers la vue et le modele
    p->setVue(&v);
    p->setModele(m);
    // Pointer la vue vers la présentation
    v.setPresentation(p);
    // Initialisation vue
    p->getVue()->majMode(m->getMode());
    // Afficher la vue
    v.show();
    return a.exec();
}
