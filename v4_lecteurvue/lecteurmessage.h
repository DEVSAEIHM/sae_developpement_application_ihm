#ifndef LECTEURMESSAGE_H
#define LECTEURMESSAGE_H

#include <QMessageBox>

class LecteurMessage : public QMessageBox
{
    Q_OBJECT
public:
    LecteurMessage(QWidget *parent = nullptr);
    ~LecteurMessage();

};

#endif // LECTEURMESSAGE_H

