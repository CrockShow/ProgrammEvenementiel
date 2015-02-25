/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FenetrePrincipale
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QCheckBox *pleinEcran;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QDial *dial;
    QLCDNumber *lcdNumber;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FenetrePrincipale)
    {
        if (FenetrePrincipale->objectName().isEmpty())
            FenetrePrincipale->setObjectName(QStringLiteral("FenetrePrincipale"));
        FenetrePrincipale->resize(400, 187);
        FenetrePrincipale->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(FenetrePrincipale);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 120, 181, 21));
        pleinEcran = new QCheckBox(centralWidget);
        pleinEcran->setObjectName(QStringLiteral("pleinEcran"));
        pleinEcran->setGeometry(QRect(40, 110, 101, 26));
        pleinEcran->setLayoutDirection(Qt::LeftToRight);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(true);
        horizontalSlider->setGeometry(QRect(10, 90, 181, 20));
        horizontalSlider->setLayoutDirection(Qt::RightToLeft);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Horizontal);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(210, 90, 181, 23));
        progressBar->setValue(0);
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(40, 0, 101, 81));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(213, 2, 171, 81));
        FenetrePrincipale->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FenetrePrincipale);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FenetrePrincipale->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FenetrePrincipale);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FenetrePrincipale->setStatusBar(statusBar);

        retranslateUi(FenetrePrincipale);

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", 0));
        pushButton->setText(QApplication::translate("FenetrePrincipale", "Quitter", 0));
        pleinEcran->setText(QApplication::translate("FenetrePrincipale", "Plein \303\251cran", 0));
        progressBar->setFormat(QApplication::translate("FenetrePrincipale", "Valeur re\303\247ue : %p%", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
