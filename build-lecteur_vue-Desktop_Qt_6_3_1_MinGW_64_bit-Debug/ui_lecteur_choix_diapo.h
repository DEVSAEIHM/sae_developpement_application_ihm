/********************************************************************************
** Form generated from reading UI file 'lecteur_choix_diapo.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEUR_CHOIX_DIAPO_H
#define UI_LECTEUR_CHOIX_DIAPO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LecteurChoixDiapo
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *annulerBtn;

    void setupUi(QDialog *LecteurChoixDiapo)
    {
        if (LecteurChoixDiapo->objectName().isEmpty())
            LecteurChoixDiapo->setObjectName(QString::fromUtf8("LecteurChoixDiapo"));
        LecteurChoixDiapo->resize(552, 68);
        horizontalLayout_3 = new QHBoxLayout(LecteurChoixDiapo);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LecteurChoixDiapo);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setItalic(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        comboBox = new QComboBox(LecteurChoixDiapo);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        okBtn = new QPushButton(LecteurChoixDiapo);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout->addWidget(okBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        annulerBtn = new QPushButton(LecteurChoixDiapo);
        annulerBtn->setObjectName(QString::fromUtf8("annulerBtn"));

        horizontalLayout->addWidget(annulerBtn);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(LecteurChoixDiapo);

        comboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(LecteurChoixDiapo);
    } // setupUi

    void retranslateUi(QDialog *LecteurChoixDiapo)
    {
        LecteurChoixDiapo->setWindowTitle(QCoreApplication::translate("LecteurChoixDiapo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LecteurChoixDiapo", "Veuillez s\303\251lectionnner le diaporama \303\240 charger", nullptr));
        okBtn->setText(QCoreApplication::translate("LecteurChoixDiapo", "Ok", nullptr));
        annulerBtn->setText(QCoreApplication::translate("LecteurChoixDiapo", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurChoixDiapo: public Ui_LecteurChoixDiapo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEUR_CHOIX_DIAPO_H
