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
    int getValue() const;
public slots:
    void setValue(int);
private:
    Ui::LecteurVitesse *ui;
    int _value;
};

#endif // LECTEURVITESSE_H
