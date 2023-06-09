#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>

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
private slots:
    void lancerDiaporama();
    void arreterDiaporama();
    void allerImgSuivante();
    void allerImgPrecedente();
};
#endif // LECTEURVUE_H
