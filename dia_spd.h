#ifndef DIASPD_H
#define DIASPD_H
#include<QDialog>
#include<QPushButton>
#include<QVBoxLayout>
class Dia_spd:public QDialog
{
	Q_OBJECT
public:
	explicit Dia_spd(QWidget *parent = 0);
	~Dia_spd();
private:
	QPushButton *guanbi;
	QVBoxLayout *layout;
};
#endif
