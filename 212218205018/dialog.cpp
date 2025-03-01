#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QDebug>

dialog::dialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}

dialog::~dialog()
{
    delete ui;
}


void dialog::on_pushButton_clicked()
{
     QMessageBox::information(this,"Janakiram 212218205018","This is information");
}

void dialog::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
         reply = QMessageBox::question(this, "Janakiram", "Do you like Burger?", QMessageBox::Yes|QMessageBox::No);
         if (reply == QMessageBox::Yes) {
             QMessageBox::information(this,"Yes","You selected Yes");
         }
         else {
             QMessageBox::information(this,"No","You selected No");
         }

}

void dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
          reply =  QMessageBox::question(this, "Custom","This is a custom message",QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
          switch (reply) {
            case QMessageBox::Yes:
              qDebug() << "Message is displayed";
              break;
            case QMessageBox::YesToAll:
              QMessageBox::warning(this,"Yes to all","Display the message with YES to all ");
              break;
            case QMessageBox::No:
              qDebug() << "Nothing is displayed";
              break;
            default:
              QMessageBox::warning(this,"No to all","Display the message with NO to all ");
                break;
}
}

void dialog::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"Warning","This is a warning message");
}
