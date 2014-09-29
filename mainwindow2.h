#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include <QApplication>
#include <QAction>
#include <QMenu>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QToolBar>
#include <QTextEdit>
#include <QString>
#include <QMenuBar>
#include <QMouseEvent>
#include <QPushButton>
#include "dia_spd.h"

class MainWindow2 : public QMainWindow
{
	Q_OBJECT
public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();


private:
	QPushButton *button,*b1;	
	Dia_spd d1;
private slots:
	void button1();
};

#endif // MAINWINDOW2_H

