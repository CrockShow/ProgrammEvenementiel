#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>

namespace Ui {
class FenetrePrincipale;
}

class FenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipale(QWidget *parent = 0);
    ~FenetrePrincipale();

private slots:
    void on_pushButton_clicked();




    void on_pleinEcran_clicked(bool checked);

private:
    Ui::FenetrePrincipale *ui;
};

#endif // FENETREPRINCIPALE_H
