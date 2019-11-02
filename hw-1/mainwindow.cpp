#include "mainwindow.h"

MyWindow::MyWindow(QWidget *parent) : QDialog(parent)
{
lbl1 = new QLabel("Пользователи");
lbl2 = new QLabel("Чат с...");

line1 = new QTextEdit();
line2 = new QTextEdit();

butt1 = new QPushButton("Отправить файл");
butt2 = new QPushButton("Писать сообщение");
butt3 = new QPushButton("Отправить сообщение");
butt4 = new QPushButton("Файл");
butt4->setSizePolicy(QSizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed, QSizePolicy::ToolButton));

QVBoxLayout * left = new QVBoxLayout;
left->addWidget(lbl1);
left->addWidget(line1);

QHBoxLayout * right1 = new QHBoxLayout;
right1->addWidget(butt1);
right1->addWidget(butt2);
right1->addWidget(butt3);

QVBoxLayout * right2 = new QVBoxLayout;
right2->addWidget(lbl2);
right2->addWidget(line2);
right2->addLayout(right1);

QHBoxLayout * lower = new QHBoxLayout;
lower->addLayout(left);
lower->addLayout(right2);



QVBoxLayout * main = new QVBoxLayout;
main->addWidget(butt4);
main->addLayout(lower);

setLayout(main);




}



