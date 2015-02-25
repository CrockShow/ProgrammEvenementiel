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
    QSlider *Slider;
    QProgressBar *Progress;
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
        Slider = new QSlider(centralWidget);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setEnabled(true);
        Slider->setGeometry(QRect(10, 90, 181, 20));
        Slider->setLayoutDirection(Qt::RightToLeft);
        Slider->setTracking(true);
        Slider->setOrientation(Qt::Horizontal);
        Slider->setTickPosition(QSlider::NoTicks);
        Progress = new QProgressBar(centralWidget);
        Progress->setObjectName(QStringLiteral("Progress"));
        Progress->setGeometry(QRect(210, 90, 181, 23));
        Progress->setToolTipDuration(0);
        Progress->setLayoutDirection(Qt::LeftToRight);
        Progress->setMaximum(99);
        Progress->setValue(0);
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(43, 0, 101, 81));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(213, 2, 171, 81));
        lcdNumber->setToolTipDuration(0);
        FenetrePrincipale->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(FenetrePrincipale);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FenetrePrincipale->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(FenetrePrincipale);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FenetrePrincipale->setStatusBar(statusBar);

        retranslateUi(FenetrePrincipale);
        QObject::connect(dial, SIGNAL(sliderMoved(int)), Slider, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), Progress, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(FenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *FenetrePrincipale)
    {
        FenetrePrincipale->setWindowTitle(QApplication::translate("FenetrePrincipale", "FenetrePrincipale", 0));
        pushButton->setText(QApplication::translate("FenetrePrincipale", "Quitter", 0));
        pleinEcran->setText(QApplication::translate("FenetrePrincipale", "Plein \303\251cran", 0));
        Progress->setFormat(QApplication::translate("FenetrePrincipale", "Valeur re\303\247ue : %p%", 0));
    } // retranslateUi

};

namespace Ui {
    class FenetrePrincipale: public Ui_FenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
