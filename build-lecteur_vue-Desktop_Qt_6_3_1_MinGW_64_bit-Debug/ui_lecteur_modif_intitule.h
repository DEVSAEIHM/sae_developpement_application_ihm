/********************************************************************************
** Form generated from reading UI file 'lecteur_modif_intitule.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEUR_MODIF_INTITULE_H
#define UI_LECTEUR_MODIF_INTITULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LecteurModifIntitule
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *titreEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *anBtn;

    void setupUi(QDialog *LecteurModifIntitule)
    {
        if (LecteurModifIntitule->objectName().isEmpty())
            LecteurModifIntitule->setObjectName(QString::fromUtf8("LecteurModifIntitule"));
        LecteurModifIntitule->resize(400, 81);
        horizontalLayout_2 = new QHBoxLayout(LecteurModifIntitule);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LecteurModifIntitule);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setItalic(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        titreEdit = new QLineEdit(LecteurModifIntitule);
        titreEdit->setObjectName(QString::fromUtf8("titreEdit"));

        horizontalLayout->addWidget(titreEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okBtn = new QPushButton(LecteurModifIntitule);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout->addWidget(okBtn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        anBtn = new QPushButton(LecteurModifIntitule);
        anBtn->setObjectName(QString::fromUtf8("anBtn"));

        horizontalLayout->addWidget(anBtn);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(LecteurModifIntitule);

        QMetaObject::connectSlotsByName(LecteurModifIntitule);
    } // setupUi

    void retranslateUi(QDialog *LecteurModifIntitule)
    {
        LecteurModifIntitule->setWindowTitle(QCoreApplication::translate("LecteurModifIntitule", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LecteurModifIntitule", "Veuillez saisir le titre de l'image", nullptr));
        okBtn->setText(QCoreApplication::translate("LecteurModifIntitule", "Ok", nullptr));
        anBtn->setText(QCoreApplication::translate("LecteurModifIntitule", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurModifIntitule: public Ui_LecteurModifIntitule {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEUR_MODIF_INTITULE_H
