#ifndef STARTDIALOG_MATVEEV_H
#define STARTDIALOG_MATVEEV_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_matveev.h"
#include "question_im.h"
#include "mainwindow.h"

class StartDialog_Matveev : public QPushButton
{
    Q_OBJECT

public:
    StartDialog_Matveev(QWidget* pwgt = 0) : QPushButton("Нажми", pwgt)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }

public slots:
    void slotButtonClicked()
    {
        InputDialog_Matveev* pInputDialog = new InputDialog_Matveev;

        if(pInputDialog->exec()== QDialog::Accepted)
        {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: "
                                     + pInputDialog->firstName()
                                     + "\nФамилия: "
                                     + pInputDialog->lastName()
                                       );

            QMessageBox msgBox;
            msgBox.setText("Хотите продолжить?");
            msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
            msgBox.setIcon(QMessageBox::Information);
            int res = msgBox.exec();
            if (res == QMessageBox::Ok){
                slotButtonClicked();
            }else{
                delete pInputDialog;
                exit(0);
            }
        }
    }
};

#endif // STARTDIALOG_MATVEEV_H
