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
    LecteurMessage *_message;
    LecteurVitesse *_vitesseDial;
    LecteurModele *_modele;
    QGraphicsScene *_scene;
    QGraphicsPixmapItem *_item;
    QString _mode;
    QTimer *_timer;
    int _speed;
private slots:
    void demandeLancer();
    void demandeArreter();
    void demandeSuivant();
    void demandePrecedent();
    void demandeImageSuivante();
    void demandeImagePrecedente();
    void demandeMajStatusBar();
    void demandeMajIntitule();
    void demandeMajMode();
    void demandeChargerDiapo();
    void demandeEnleverDiapo();
    void demandeChangerVitesse();
    void demandeMiniLecteur();
private:
    void chargerImage();
    void desactiverToutBoutons();
    void setMode(QString m);
    QString getMode() const;
};
#endif // LECTEURVUE_H
