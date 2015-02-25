#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"

FenetrePrincipale::FenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FenetrePrincipale)
{
    ui->setupUi(this);
}

FenetrePrincipale::~FenetrePrincipale()
{
    delete ui;
}

void FenetrePrincipale::on_pushButton_clicked()
{
    qApp->quit();
}



void FenetrePrincipale::on_pleinEcran_clicked(bool checked)
{
    if (check == true)
    {
        this->showFullScreen();
    }
    else
    {
        showNormal();
    }
}
