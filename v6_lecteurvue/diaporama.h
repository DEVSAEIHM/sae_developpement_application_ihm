#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include "image.h"
#include <vector>
#include <QString>

typedef vector<Image*> TableauImages;   // Structure de données contenant les infos sur les images

class Diaporama
{
public:
    Diaporama(int numDiapo, const char* nomDiapo);
    ~Diaporama();
    void ajouterImage(Image*); // ajoute une image dans le tableau d'images _diaporama
    unsigned int nbImages();    // affiche la taille de _diaporama
    Image* imageCourante();     // retourne le pointeur vers l'image courante
    unsigned int numDiaporamaCourant(); // retourne le numéro du diaporama
private:
    TableauImages _diaporama;
    char* _nomDiapo; // le nom du diaporama;
    unsigned _numDiaporamaCourant;   // numéro du diaporama courant, par défaut 0
    unsigned int _posImageCourante;  /* position, dans le diaporama,
                                        de l'image courante.
                                        Indéfini quand diaporama vide.
                                        Démarre à 0 quand diaporama non vide */

private:
    void chargerDiaporama();    // charge dans _diaporama les images du _numDiaporamaCourant
    void viderDiaporama();      // vide _diaporama de tous ses objets image et les delete
    unsigned int positionDuMax(unsigned int, unsigned int); // retourne l'index dans le vecteur de l'image ayant le rang le plus grand
    void triDiaporama(); // trie le diaporama dans l'ordre croissant selon le rang de l'image
};

#endif // DIAPORAMA_H
