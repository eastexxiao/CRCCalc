#include "CRCCalcuator.h"

#include "QMessageBox"

CRCCalcuator::CRCCalcuator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.cbMethod->addItem("CRC-5/BTM           x5+x2+1");
	ui.cbMethod->addItem("CRC-16/BTM          x16+x12+x5+1");
	ui.cbMethod->addItem("CRC-32/BTM          x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1");
	ui.cbMethod->addItem("CRC-4/ITU           x4+x+1");
	ui.cbMethod->addItem("CRC-5/EPC           x5+x3+1");
	ui.cbMethod->addItem("CRC-5/ITU           x5+x4+x2+1");
	ui.cbMethod->addItem("CRC-5/USB           x5+x2+1");
	ui.cbMethod->addItem("CRC-6/ITU           x6+x+1");
	ui.cbMethod->addItem("CRC-7/MMC           x7+x3+1");
	ui.cbMethod->addItem("CRC-8               x8+x2+x+1");
	ui.cbMethod->addItem("CRC-8/ITU           x8+x2+x+1");
	ui.cbMethod->addItem("CRC-8/ROHC          x8+x2+x+1");
	ui.cbMethod->addItem("CRC-8/MAXIM         x8+x5+x4+1");
	ui.cbMethod->addItem("CRC-16/IBM          x16+x15+x2+1");
	ui.cbMethod->addItem("CRC-16/MAXIM        x16+x15+x2+1");
	ui.cbMethod->addItem("CRC-16/USB          x16+x15+x2+1");
	ui.cbMethod->addItem("CRC-16/MODBUS       x16+x15+x2+1");
	ui.cbMethod->addItem("CRC-16/CCITT        x16+x12+x5+1");
	ui.cbMethod->addItem("CRC-16/CCITT-FALSE  x16+x12+x5+1");
	ui.cbMethod->addItem("CRC-16/X25          x16+x12+x5+1");
	ui.cbMethod->addItem("CRC-16/XMODEM       x16+x12+x5+1");
	ui.cbMethod->addItem("CRC-16/DNP          x16+x13+x12+x11+x10+x8+x6+x5+x2+1");
	ui.cbMethod->addItem("CRC-32              x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1");
	ui.cbMethod->addItem("CRC-32/MPEG-2       x32+x26+x23+x22+x16+x12+x11+x10+x8+x7+x5+x4+x2+x+1");

	QObject::connect(ui.cbMethod, static_cast<void (QComboBox:: *)(int)>(&QComboBox::activated), this, &CRCCalcuator::DoChangeCombox);
	QObject::connect(ui.butCalc, &QPushButton::clicked, this, &CRCCalcuator::DoCalcCrc);
	DoChangeCombox();
	

}

int CRCCalcuator::DoCalcCrc()
{
	QString crcSrc = ui.textEdit->toPlainText();

	//QMessageBox* msg = new QMessageBox(this);
	//msg->setText(crcSrc);
	//msg->exec();


	return 0;
}

int CRCCalcuator::DoChangeCombox()
{
	QString width;
	QString poly;
	QString init;
	QString refIn;
	QString refOut;
	QString xorOut;
	QString alias;
	QString name;

	int index = ui.cbMethod->currentIndex();

	switch (index) {
	case 0:
		name = "CRC-5/BTM";
		width = "5";
		poly = "UNKNOWN";
		refIn = "False";
		refOut = "False";
		xorOut = "0x00";
		init = "0x80";
		type = CRC_5_BTM;
		break;
	case 1:
		name = "CRC-16/BTM";
		width = "16";
		poly = "0x1021";
		refIn = "False";
		refOut = "False";
		xorOut = "0x0000";
		init = "0xFFFF";
		alias = "CRC-16/CCITT-FALSE";
		type = CRC_16_BTM;
		break;
	case 2:
		name = "CRC-32/BTM";
		width = "32";
		poly = "0x4C11DB7";
		refIn = "False";
		refOut = "False";
		xorOut = "0x0000";
		init = "0xFFFFFFF";
		alias = "CRC-32/MPEG-2";
		type = CRC_32_BTM;
		break;

	case 3:
		name = "CRC-4/ITU";
		width = "4";
		poly = "0x03";
		refIn = "True";
		refOut = "True";
		xorOut = "0x00";
		init = "0x00";
		type = CRC_4_ITU;
		break;
	case 4:
		name = "CRC-5/EPC";
		width = "5";
		poly = "0x09";
		refIn = "False";
		refOut = "False";
		xorOut = "0x00";
		init = "0x09";
		alias = "";
		type = CRC_5_EPC;
		break;
	case 5:
		name = "CRC-5/ITU";
		width = "5";
		poly = "0x15";
		refIn = "True";
		refOut = "True";
		xorOut = "0x00";
		init = "0x00";
		alias = "";
		type = CRC_5_ITU;
		break;

	case 6:
		name = "CRC-5/USB";
		width = "5";
		poly = "0x05";
		refIn = "True";
		refOut = "True";
		xorOut = "0x1F";
		init = "0x1F";
		type = CRC_5_USB;
		break;
	case 7:
		name = "CRC-6/ITU";
		width = "6";
		poly = "0x03";
		refIn = "True";
		refOut = "True";
		xorOut = "0x00";
		init = "0x00";
		type = CRC_6_ITU;
		break;
	case 8:
		name = "CRC-7/MMC";
		width = "7";
		poly = "0x09";
		refIn = "False";
		refOut = "False";
		xorOut = "0x00";
		init = "0x00";
		
		type = CRC_7_MMC;
		break;

	case 9:
		name = "CRC-8";
		width = "8";
		poly = "0x07";
		refIn = "False";
		refOut = "False";
		xorOut = "0x00";
		init = "0x00";
		type = CRC_8;
		break;
	case 10:
		name = "CRC-8/ITU";
		width = "8";
		poly = "0x07";
		refIn = "False";
		refOut = "False";
		xorOut = "0x55";
		init = "0x00";
		
		type = CRC_8_ITU;
		break;
	case 11:
		name = "CRC-8/ROHC";
		width = "8";
		poly = "0x07";
		refIn = "True";
		refOut = "True";
		xorOut = "0x00";
		init = "0xFF";
		
		type = CRC_8_ROHC;
		break;

	case 12:
		name = "CRC-8/MAXIM";
		width = "8";
		poly = "0x31";
		refIn = "True";
		refOut = "True";
		xorOut = "0x00";
		init = "0x00";
		
		type = CRC_8_MAXIM;
		break;

	case 13:
		name = "CRC-16/IBM";
		width = "16";
		poly = "0x8005";
		refIn = "True";
		refOut = "True";
		xorOut = "0x0000";
		init = "0x0000";
		type = CRC_16_IBM;
		break;
	case 14:
		name = "CRC-16/MAXIM";
		width = "16";
		poly = "0x8005";
		refIn = "True";
		refOut = "True";
		xorOut = "0xFFFF";
		init = "0x0000";
		
		type = CRC_16_MAXIM;
		break;
	case 15:
		name = "CRC-16/USB";
		width = "16";
		poly = "0x8005";
		refIn = "True";
		refOut = "True";
		xorOut = "0xFFFF";
		init = "0xFFFF";
		
		type = CRC_16_USB;
		break;

	case 16:
		name = "CRC-16/MODBUS";
		width = "16";
		poly = "0x8005";
		refIn = "True";
		refOut = "True";
		xorOut = "0x0000";
		init = "0xFFFF";
		type = CRC_16_MODBUS;
		break;
	case 17:
		name = "CRC-16/CCITT";
		width = "16";
		poly = "0x1021";
		refIn = "True";
		refOut = "True";
		xorOut = "0x0000";
		init = "0x0000";
		
		type = CRC_16_CCITT;
		break;
	case 18:
		name = "CRC-16/CCITT-FALSE";
		width = "16";
		poly = "0x1021";
		refIn = "False";
		refOut = "False";
		xorOut = "0x0000";
		init = "0xFFFF";
		
		type = CRC_16_CCITT_FALSE;
		break;
	case 19:
		name = "CRC-16/X25";
		width = "16";
		poly = "0x1021";
		refIn = "True";
		refOut = "True";
		xorOut = "0xFFFF";
		init = "0xFFFF";
		type = CRC_16_X25;
		break;
	case 20:
		name = "CRC-16/XMODEM";
		width = "16";
		poly = "0x1021";
		refIn = "False";
		refOut = "False";
		xorOut = "0x0000";
		init = "0x0000";
		
		type = CRC_16_XMODEM;
		break;
	case 21:
		name = "CRC-16/DNP";
		width = "16";
		poly = "0x3D65";
		refIn = "True";
		refOut = "True";
		xorOut = "0xFFFF";
		init = "0x0000";
		
		type = CRC_16_DNP;
		break;

	case 22:
		name = "CRC-32";
		width = "32";
		poly = "0x4C11DB7";
		refIn = "True";
		refOut = "True";
		xorOut = "0xFFFFFFF";
		init = "0xFFFFFFF";
		type = CRC_32;
		break;
	case 23:
		name = "CRC-32/MPEG-2";
		width = "32";
		poly = "0x4C11DB7";
		refIn = "False";
		refOut = "False";
		xorOut = "0x0000000";
		init = "0xFFFFFFF";
		
		type = CRC_32_MPEG_2;
		break;

	}
	
	ui.nameLabel->setText(name);
	ui.widthLabel->setText(width);
	ui.polyLabel->setText(poly);
	ui.initLabel->setText(init);
	ui.refInLabel->setText(refIn);
	ui.refOutLabel->setText(refOut);
	ui.xOrOutLabel->setText(xorOut);
	ui.aliasLabel->setText(alias);
	
	return 0;

}
