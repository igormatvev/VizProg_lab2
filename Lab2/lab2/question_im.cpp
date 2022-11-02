#include "question_im.h"
#include <QLabel>
#include <QLayout>
#include <QString>
#include <QPushButton>

Question_IM::Question_IM()
{
    QLabel* plblQuestion = new QLabel("&Хотите ввести еще раз?");
    QPushButton* pcmdOk = new QPushButton("&Ok");
    QPushButton* pcmdCancel = new QPushButton("&Cancel");

    connect(pcmdOk, SIGNAL(clicked()), SLOT(accept()));
    connect(pcmdCancel, SIGNAL(clicked()), SLOT(reject()));

    QGridLayout* ptopLayout1 = new QGridLayout;
    ptopLayout1->addWidget(plblQuestion,0,0);
    ptopLayout1->addWidget(pcmdOk,2,0);
    ptopLayout1->addWidget(pcmdCancel,2,1);
    setLayout(ptopLayout1);
}
