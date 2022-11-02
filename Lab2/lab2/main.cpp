#include "startdialog_matveev.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog_Matveev startDialog;
    startDialog.show();

    return a.exec();
}
