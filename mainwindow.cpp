#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{
    //设置主窗口标题
        setWindowTitle(tr("test"));
	setStyleSheet("background:pink");
	setWindowIcon(QIcon("qt.png"));
	//setWindowFlags(Qt::FramelessWindowHint);

	name = new QLabel("帐号",this);
	name->setGeometry((QRect(200,200,100,25)));
	name->setStyleSheet("font-size:15px;color:green;font-weight:bold;font-style:italic");

	pwd = new QLabel("密码",this);
	pwd->setGeometry((QRect(200,300,100,25)));
	pwd->setStyleSheet("font-size:15px;color:green;font-weight:bold;font-style:italic");

	name_input = new QLineEdit(this);
	name_input->setGeometry((QRect(350,200,250,25)));
	name_input->setStyleSheet("border:1px;border-style:solid;color:yellow;border-color:bluered;");
	name_input->setMaxLength(12);

	pwd_input = new QLineEdit(this);
	pwd_input->setEchoMode(QLineEdit::Password);
	pwd_input->setGeometry((QRect(350,300,250,25)));
	pwd_input->setStyleSheet("border:1px;border-style:solid;color:yellow;border-color:bluered;");
	pwd_input->setMaxLength(12);

	button = new QPushButton(this);
	button->setGeometry(QRect(200,450,100,25));
	button->setText("登录");	
	connect(button,SIGNAL(clicked()),this,SLOT(showMainwindow2()));

	btClose = new QPushButton(this);
	btClose->setText("关闭");
	btClose->setGeometry(QRect(500,450,100,25));
	connect(btClose,SIGNAL(clicked()),this,SLOT(close()));

	this->resize(800,600);
	name_input->setFocus();
}

MainWindow::~MainWindow()
{
	delete name_input;
	delete pwd_input;
	delete name;
	delete pwd;
	delete btClose;
	delete button;
}

void MainWindow::showMainwindow2()
{
	if(name_input->text().trimmed()=="lzs"&&pwd_input->text().trimmed()=="lzsb")
	{
		w2.show();
		this->close();
	}
	else
	{
		QMessageBox::warning(this,"警告","用户名或密码错误！",QMessageBox::Yes);
		name_input->setFocus();
	}
}
