#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

extern MainWindow *w;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->pushButtonCliente, SIGNAL(clicked(bool)), w, SLOT(ClientConnectDisconnect()));
    connect(ui->pushButtonServidor, SIGNAL(clicked(bool)), w, SLOT(ServerActivateDeactivate()));

}

Dialog::~Dialog()
{
    delete ui;
}
