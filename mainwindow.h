#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include "mainwindow2.h"


class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


	
private:
	QPushButton *btClose,*button;
	QLabel *name,*pwd;
	QLineEdit *name_input,*pwd_input;
	MainWindow2 w2;
private slots:
	void showMainwindow2();

};

#endif // MAINWINDOW_H

