#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"

extern MainWindow *w;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->checkBoxClient, SIGNAL(clicked(bool)), w, SLOT(ClientConnectDisconnect()));
    connect(ui->checkBoxClient, SIGNAL(clicked(bool)), this, SLOT(LabelClientConnectDisconnect()));
    connect(ui->checkBoxServer, SIGNAL(clicked(bool)), w, SLOT(ServerActivateDeactivate()));
    connect(ui->checkBoxServer, SIGNAL(clicked(bool)), this, SLOT(LabelServerActivateDesactivate()));

}

Dialog::~Dialog()
{
    delete ui;
}


void  Dialog::LabelClientConnectDisconnect(){


    if(ui->checkBoxClient->isChecked())
        ui -> labelConnectDisconnect -> setText("Conectado");
    else
        ui -> labelConnectDisconnect -> setText("Desconectado");

}


void Dialog::LabelServerActivateDesactivate(){

    if(ui->checkBoxServer->isChecked())
        ui -> labelActivateDesactivate -> setText("Activado");
    else
        ui -> labelActivateDesactivate -> setText("Desactivado");

}


void Dialog::EditPlainTextClient(QString text){

     ui->plainTextEditClient->insertPlainText(text);
}


void Dialog::EditPlainTextServer(QString text){

     ui->plainTextEditServer->insertPlainText(text);
}



