#include "dia_spd.h"
Dia_spd::Dia_spd(QWidget *parent):
	QDialog(parent)
{
	guanbi = new QPushButton();
	guanbi->setText("关闭");
        guanbi->setGeometry(QRect(50,50,100,25));
        connect(guanbi,SIGNAL(clicked()),this,SLOT(close()));
	layout = new QVBoxLayout();
	layout->addWidget(guanbi);
		
	this->setLayout(layout);
	this->resize(100,100);
	this->setWindowTitle("dialogtest");	
}
Dia_spd::~Dia_spd()
{
	delete guanbi;
	delete layout;
}
