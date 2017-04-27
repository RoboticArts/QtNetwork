#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);

    void EditPlainTextServer(QString text);
    void EditPlainTextClient(QString text);

    ~Dialog();

private:
    Ui::Dialog *ui;


public slots:

    void LabelServerActivateDesactivate();
    void LabelClientConnectDisconnect();
};

#endif // DIALOG_H
