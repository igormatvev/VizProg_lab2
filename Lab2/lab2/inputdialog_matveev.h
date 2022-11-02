#ifndef INPUTDIALOG_MATVEEV_H
#define INPUTDIALOG_MATVEEV_H

#include <QDialog>
#include <QLineEdit>

class QLineEdit;

class InputDialog_Matveev: public QDialog
{
    Q_OBJECT
private:
    QLineEdit * m_ptxtFirstName;
    QLineEdit * m_ptxtLastName;
public:
    InputDialog_Matveev(QWidget* pwgt =0);

    QString firstName() const;
    QString lastName() const;
};

#endif // INPUTDIALOG_MATVEEV_H
