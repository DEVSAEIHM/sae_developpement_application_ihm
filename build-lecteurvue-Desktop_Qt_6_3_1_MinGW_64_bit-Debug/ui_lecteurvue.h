/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *action_Quitter;
    QAction *actionA_propos_de;
    QAction *actionVitesse;
    QAction *actionCharger_diaporama;
    QAction *actionEnlever_diaporama;
    QAction *actionMini_lecteur;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QLabel *intitule;
    QSpacerItem *horizontalSpacer_7;
    QGraphicsView *imgVue;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLancer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnPrecedent;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnSuivant;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnArreter;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menu_Fichier;
    QMenu *menuParam_trer;
    QMenu *menu_Aide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName(QString::fromUtf8("LecteurVue"));
        LecteurVue->resize(581, 310);
        LecteurVue->setMinimumSize(QSize(0, 0));
        action_Quitter = new QAction(LecteurVue);
        action_Quitter->setObjectName(QString::fromUtf8("action_Quitter"));
        actionA_propos_de = new QAction(LecteurVue);
        actionA_propos_de->setObjectName(QString::fromUtf8("actionA_propos_de"));
        actionVitesse = new QAction(LecteurVue);
        actionVitesse->setObjectName(QString::fromUtf8("actionVitesse"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icon/speedIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVitesse->setIcon(icon);
        actionCharger_diaporama = new QAction(LecteurVue);
        actionCharger_diaporama->setObjectName(QString::fromUtf8("actionCharger_diaporama"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icon/openIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCharger_diaporama->setIcon(icon1);
        actionEnlever_diaporama = new QAction(LecteurVue);
        actionEnlever_diaporama->setObjectName(QString::fromUtf8("actionEnlever_diaporama"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icon/removeIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnlever_diaporama->setIcon(icon2);
        actionMini_lecteur = new QAction(LecteurVue);
        actionMini_lecteur->setObjectName(QString::fromUtf8("actionMini_lecteur"));
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(0, 0));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        intitule = new QLabel(centralwidget);
        intitule->setObjectName(QString::fromUtf8("intitule"));
        QFont font;
        font.setItalic(true);
        intitule->setFont(font);

        horizontalLayout_8->addWidget(intitule);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        imgVue = new QGraphicsView(centralwidget);
        imgVue->setObjectName(QString::fromUtf8("imgVue"));
        imgVue->setMinimumSize(QSize(155, 155));

        gridLayout->addWidget(imgVue, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnLancer = new QPushButton(centralwidget);
        btnLancer->setObjectName(QString::fromUtf8("btnLancer"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icon/lancerIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLancer->setIcon(icon3);

        horizontalLayout_7->addWidget(btnLancer);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        btnPrecedent = new QPushButton(centralwidget);
        btnPrecedent->setObjectName(QString::fromUtf8("btnPrecedent"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icon/precedentIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrecedent->setIcon(icon4);

        horizontalLayout_7->addWidget(btnPrecedent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        btnSuivant = new QPushButton(centralwidget);
        btnSuivant->setObjectName(QString::fromUtf8("btnSuivant"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icon/suivantIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSuivant->setIcon(icon5);

        horizontalLayout_7->addWidget(btnSuivant);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        btnArreter = new QPushButton(centralwidget);
        btnArreter->setObjectName(QString::fromUtf8("btnArreter"));
        btnArreter->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icon/arreterIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnArreter->setIcon(icon6);

        horizontalLayout_7->addWidget(btnArreter);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        gridLayout->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 581, 22));
        menu_Fichier = new QMenu(menubar);
        menu_Fichier->setObjectName(QString::fromUtf8("menu_Fichier"));
        menuParam_trer = new QMenu(menu_Fichier);
        menuParam_trer->setObjectName(QString::fromUtf8("menuParam_trer"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icon/paramIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuParam_trer->setIcon(icon7);
        menu_Aide = new QMenu(menubar);
        menu_Aide->setObjectName(QString::fromUtf8("menu_Aide"));
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        LecteurVue->setStatusBar(statusbar);

        menubar->addAction(menu_Fichier->menuAction());
        menubar->addAction(menu_Aide->menuAction());
        menu_Fichier->addAction(action_Quitter);
        menu_Fichier->addAction(menuParam_trer->menuAction());
        menuParam_trer->addAction(actionVitesse);
        menuParam_trer->addAction(actionCharger_diaporama);
        menuParam_trer->addAction(actionEnlever_diaporama);
        menuParam_trer->addAction(actionMini_lecteur);
        menu_Aide->addAction(actionA_propos_de);

        retranslateUi(LecteurVue);

        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "Lecteur de diaporama", nullptr));
        action_Quitter->setText(QCoreApplication::translate("LecteurVue", "&Quitter", nullptr));
#if QT_CONFIG(shortcut)
        action_Quitter->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionA_propos_de->setText(QCoreApplication::translate("LecteurVue", "A propos de...", nullptr));
#if QT_CONFIG(shortcut)
        actionA_propos_de->setShortcut(QCoreApplication::translate("LecteurVue", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVitesse->setText(QCoreApplication::translate("LecteurVue", "Vitesse", nullptr));
#if QT_CONFIG(shortcut)
        actionVitesse->setShortcut(QCoreApplication::translate("LecteurVue", "Alt+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCharger_diaporama->setText(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
#if QT_CONFIG(shortcut)
        actionCharger_diaporama->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEnlever_diaporama->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
#if QT_CONFIG(shortcut)
        actionEnlever_diaporama->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMini_lecteur->setText(QCoreApplication::translate("LecteurVue", "Mini-lecteur", nullptr));
#if QT_CONFIG(shortcut)
        actionMini_lecteur->setShortcut(QCoreApplication::translate("LecteurVue", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        intitule->setText(QCoreApplication::translate("LecteurVue", "Aucun diaporama", nullptr));
        btnLancer->setText(QCoreApplication::translate("LecteurVue", "&Lancer", nullptr));
        btnPrecedent->setText(QCoreApplication::translate("LecteurVue", "&Pr\303\251c\303\251dent", nullptr));
        btnSuivant->setText(QCoreApplication::translate("LecteurVue", "&Suivant", nullptr));
        btnArreter->setText(QCoreApplication::translate("LecteurVue", "&Arr\303\252ter", nullptr));
        menu_Fichier->setTitle(QCoreApplication::translate("LecteurVue", "&Fichier", nullptr));
        menuParam_trer->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\251trer", nullptr));
        menu_Aide->setTitle(QCoreApplication::translate("LecteurVue", "&Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
