#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CRCCalcuator.h"
#include "crc.h"

class CRCCalcuator : public QMainWindow
{
	Q_OBJECT

public:
	CRCCalcuator(QWidget *parent = Q_NULLPTR);
	int DoCalcCrc();
	int DoChangeCombox();

private:
	Ui::CRCCalcuatorClass ui;
	CRC_TYPE_E type;
};
