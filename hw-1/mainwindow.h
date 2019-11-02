#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>
#include <QLabel>
//#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>

class MyWindow : public QDialog
{
Q_OBJECT

public:
MyWindow(QWidget * parent = nullptr);

private:
QLabel * lbl1;
QLabel * lbl2;

QTextEdit * line1;
QTextEdit * line2;

QPushButton * butt1;
QPushButton * butt2;
QPushButton * butt3;
QPushButton * butt4;

};
#endif // MAINWINDOW_H
