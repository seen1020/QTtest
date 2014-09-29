#include "mainwindow2.h"


MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent)

{
    //设置主窗口标题
        setWindowTitle(tr("window2"));
	setStyleSheet("background:green");
	setWindowIcon(QIcon("qt.png"));
	
	b1 = new QPushButton(this);
	b1->setText("spider");
	connect(b1,SIGNAL(clicked()),this,SLOT(button1()));
	b1->setGeometry((QRect(300,150,200,50)));

//	setWindowFlags(Qt::FramelessWindowHint);
	button = new QPushButton(this);
	button->setText("exit");
	connect(button,SIGNAL(clicked()),this,SLOT(close()));
	button->setGeometry((QRect(300,390,200,50)));
	this->resize(800,500);
}
void MainWindow2::button1()
{
	this->hide();
	d1.show();
	d1.exec();
	this->show();
}
MainWindow2::~MainWindow2()
{
	delete b1;
	delete button;
}

