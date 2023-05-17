#ifndef LECTEURVITESSE_H
#define LECTEURVITESSE_H

#include <QDialog>

namespace Ui {
class LecteurVitesse;
}

class LecteurVitesse : public QDialog
{
    Q_OBJECT

public:
    explicit LecteurVitesse(QWidget *parent = nullptr);
    ~LecteurVitesse();
    int getValue() const; // Retourne la valeur de _value.
public slots:
    void setValue(int); // Affecte une nouvelle valeur à la donnée menbre _value
private:
    Ui::LecteurVitesse *ui;
    int _value; // La valeur de la vitesse sélectionnée.
};

#endif // LECTEURVITESSE_H
