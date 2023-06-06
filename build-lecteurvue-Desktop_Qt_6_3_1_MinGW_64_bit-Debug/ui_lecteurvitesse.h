/********************************************************************************
** Form generated from reading UI file 'lecteurvitesse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVITESSE_H
#define UI_LECTEURVITESSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LecteurVitesse
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDial *dial;
    QHBoxLayout *horizontalLayout;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer;
    QLabel *lcd;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *anBtn;

    void setupUi(QDialog *LecteurVitesse)
    {
        if (LecteurVitesse->objectName().isEmpty())
            LecteurVitesse->setObjectName(QString::fromUtf8("LecteurVitesse"));
        LecteurVitesse->resize(251, 172);
        verticalLayout_2 = new QVBoxLayout(LecteurVitesse);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(LecteurVitesse);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(9);
        font.setItalic(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        dial = new QDial(LecteurVitesse);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(2);
        dial->setMaximum(38);
        dial->setSingleStep(2);
        dial->setPageStep(2);
        dial->setSliderPosition(20);
        dial->setWrapping(false);
        dial->setNotchTarget(15.000000000000000);
        dial->setNotchesVisible(true);

        verticalLayout->addWidget(dial);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        okBtn = new QPushButton(LecteurVitesse);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        horizontalLayout->addWidget(okBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lcd = new QLabel(LecteurVitesse);
        lcd->setObjectName(QString::fromUtf8("lcd"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(9);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcd->sizePolicy().hasHeightForWidth());
        lcd->setSizePolicy(sizePolicy);
        lcd->setBaseSize(QSize(4, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(10);
        lcd->setFont(font1);

        horizontalLayout->addWidget(lcd);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        anBtn = new QPushButton(LecteurVitesse);
        anBtn->setObjectName(QString::fromUtf8("anBtn"));

        horizontalLayout->addWidget(anBtn);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(LecteurVitesse);

        QMetaObject::connectSlotsByName(LecteurVitesse);
    } // setupUi

    void retranslateUi(QDialog *LecteurVitesse)
    {
        LecteurVitesse->setWindowTitle(QCoreApplication::translate("LecteurVitesse", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LecteurVitesse", "Tourner la molette pour modifier le temps en d\303\251cisecondes", nullptr));
        okBtn->setText(QCoreApplication::translate("LecteurVitesse", "Ok", nullptr));
        lcd->setText(QCoreApplication::translate("LecteurVitesse", "20", nullptr));
        anBtn->setText(QCoreApplication::translate("LecteurVitesse", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVitesse: public Ui_LecteurVitesse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVITESSE_H
