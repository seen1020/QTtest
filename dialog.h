#ifndef DIALOG_H
#define DIALOG_H
#include<QDialog>
#include<QPushButton>
#include<QVBoxLayout>
class Dialog:public QDialog
{
	Q_OBJECT
public:
	explicit Dialog(QWidget *parent = 0);
	~Dialog();
private:
	QPushButton *guanbi;
	QVBoxLayout *layout;
};
#endif
