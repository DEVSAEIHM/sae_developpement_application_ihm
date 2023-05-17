#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>

#include "lecteurmodele.h"
#include "lecteurmessage.h"
#include "lecteurvitesse.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QWidget *parent = nullptr);
    ~LecteurVue();

private:
    Ui::LecteurVue *ui;
    LecteurMessage *_message; /* La boîte de message donnant les informations
                                 sur la version, date de création, auteurs
                                 de l'application. */
    LecteurVitesse *_vitesseDial; /* La boîte de dialogue permettant de modifier
                                     la vitesse de défilement des images. */
    LecteurModele *_modele; /* Pointeur sur le modèle. */
    QGraphicsScene *_scene; // Pointeur sur la scène de la QGraphicsView
    QGraphicsPixmapItem *_item; // Pointeur sur l'item présent dans la scène
    QString _mode; // Le mode du lecteur soit "Manuel" ou "Auto"
    QTimer *_timer; // Pointeur sur le timer utilisé pour la lecture en mode Auto
    int _speed; // La fréquence de battement du timer.

private slots:
    void demandeLancer(); // Lance la lecture du diaporama en mode Auto
    void demandeArreter(); // Arrête la lecture du diaporama en mode Auto
    void demandeSuivant(); /* Si en mode Auto appel methode "demandeArreter()"
                              sinon appel la méthode "demandeImageSuivante()" */
    void demandePrecedent(); /* Si en mode Auto appel methode "demandeArreter()"
                              sinon appel la méthode "demandeImagePrecedente()" */
    void demandeImageSuivante(); // Affiche l'image suivante.
    void demandeImagePrecedente(); // Affiche l'image précédente
    void demandeMajStatusBar(); // Met à jour les informations de la bar de status
    void demandeMajIntitule(); /* Met à jour l'intitulé du diaporama, numero diapo,
                                  titre image, nom catégorie image */
    void demandeMajMode(); // Met à jour le mode de lecture soit Auto, soit Manuel.
    void demandeChargerDiapo(); // Charge le diaporama et affiche la première image.
    void demandeEnleverDiapo(); // Enlève le diaporama et l'image en cours d'affichage.
    void demandeChangerVitesse(); /* Affiche la fenêtre de dialogue permettant de modifier
                                     la vitesse de défilement du diaporama */
    void demandeMiniLecteur(); // Réduit la taille du lecteur à sa taille minimale.

private:
    void chargerImage(); // Charge l'image dans la scène du QGraphicsView
    void desactiverToutBoutons(); // Désactive tout les boutons de l'interface
    void setMode(QString m); // Modifie le mode de lecture
    QString getMode() const; // Retourne le mode en cours
};
#endif // LECTEURVUE_H
