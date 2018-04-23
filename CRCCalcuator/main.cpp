#include "CRCCalcuator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CRCCalcuator w;
	w.show();
	return a.exec();
}
