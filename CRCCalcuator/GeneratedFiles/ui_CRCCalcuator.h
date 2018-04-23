/********************************************************************************
** Form generated from reading UI file 'CRCCalcuator.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRCCALCUATOR_H
#define UI_CRCCALCUATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRCCalcuatorClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QTextEdit *textEdit;
    QPushButton *butCopy;
    QPushButton *butPaste;
    QGroupBox *groupBox_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *nameLabel;
    QLabel *widthLabel;
    QLabel *polyLabel;
    QLabel *initLabel;
    QLabel *refInLabel;
    QLabel *refOutLabel;
    QLabel *xOrOutLabel;
    QLabel *aliasLabel;
    QComboBox *cbMethod;
    QPushButton *butCalc;
    QLineEdit *txtRes;
    QLabel *label_9;
    QPushButton *butCopyRes;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CRCCalcuatorClass)
    {
        if (CRCCalcuatorClass->objectName().isEmpty())
            CRCCalcuatorClass->setObjectName(QStringLiteral("CRCCalcuatorClass"));
        CRCCalcuatorClass->resize(762, 342);
        centralWidget = new QWidget(CRCCalcuatorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 391, 181));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 371, 141));
        butCopy = new QPushButton(centralWidget);
        butCopy->setObjectName(QStringLiteral("butCopy"));
        butCopy->setGeometry(QRect(430, 40, 101, 51));
        butPaste = new QPushButton(centralWidget);
        butPaste->setObjectName(QStringLiteral("butPaste"));
        butPaste->setGeometry(QRect(430, 130, 101, 51));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(550, 40, 191, 271));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 54, 12));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 54, 12));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 54, 12));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 100, 54, 12));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 120, 54, 12));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 140, 54, 12));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 160, 54, 12));
        nameLabel = new QLabel(groupBox_2);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(80, 20, 91, 16));
        widthLabel = new QLabel(groupBox_2);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));
        widthLabel->setGeometry(QRect(80, 40, 54, 12));
        polyLabel = new QLabel(groupBox_2);
        polyLabel->setObjectName(QStringLiteral("polyLabel"));
        polyLabel->setGeometry(QRect(80, 60, 101, 16));
        initLabel = new QLabel(groupBox_2);
        initLabel->setObjectName(QStringLiteral("initLabel"));
        initLabel->setGeometry(QRect(80, 80, 111, 16));
        refInLabel = new QLabel(groupBox_2);
        refInLabel->setObjectName(QStringLiteral("refInLabel"));
        refInLabel->setGeometry(QRect(80, 100, 101, 16));
        refOutLabel = new QLabel(groupBox_2);
        refOutLabel->setObjectName(QStringLiteral("refOutLabel"));
        refOutLabel->setGeometry(QRect(80, 120, 91, 16));
        xOrOutLabel = new QLabel(groupBox_2);
        xOrOutLabel->setObjectName(QStringLiteral("xOrOutLabel"));
        xOrOutLabel->setGeometry(QRect(80, 140, 101, 16));
        aliasLabel = new QLabel(groupBox_2);
        aliasLabel->setObjectName(QStringLiteral("aliasLabel"));
        aliasLabel->setGeometry(QRect(80, 160, 101, 16));
        cbMethod = new QComboBox(centralWidget);
        cbMethod->setObjectName(QStringLiteral("cbMethod"));
        cbMethod->setGeometry(QRect(20, 210, 391, 22));
        butCalc = new QPushButton(centralWidget);
        butCalc->setObjectName(QStringLiteral("butCalc"));
        butCalc->setGeometry(QRect(430, 210, 101, 23));
        txtRes = new QLineEdit(centralWidget);
        txtRes->setObjectName(QStringLiteral("txtRes"));
        txtRes->setGeometry(QRect(70, 250, 341, 20));
        txtRes->setReadOnly(true);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 250, 54, 21));
        butCopyRes = new QPushButton(centralWidget);
        butCopyRes->setObjectName(QStringLiteral("butCopyRes"));
        butCopyRes->setGeometry(QRect(430, 250, 101, 23));
        CRCCalcuatorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CRCCalcuatorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CRCCalcuatorClass->setStatusBar(statusBar);

        retranslateUi(CRCCalcuatorClass);

        QMetaObject::connectSlotsByName(CRCCalcuatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *CRCCalcuatorClass)
    {
        CRCCalcuatorClass->setWindowTitle(QApplication::translate("CRCCalcuatorClass", "CRCCalcuator", nullptr));
        groupBox->setTitle(QApplication::translate("CRCCalcuatorClass", "Input", nullptr));
        butCopy->setText(QApplication::translate("CRCCalcuatorClass", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        butCopy->setShortcut(QApplication::translate("CRCCalcuatorClass", "Alt+C", nullptr));
#endif // QT_NO_SHORTCUT
        butPaste->setText(QApplication::translate("CRCCalcuatorClass", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        butPaste->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        groupBox_2->setTitle(QApplication::translate("CRCCalcuatorClass", "CRC Info", nullptr));
        label->setText(QApplication::translate("CRCCalcuatorClass", "Name:", nullptr));
        label_2->setText(QApplication::translate("CRCCalcuatorClass", "Width:", nullptr));
        label_3->setText(QApplication::translate("CRCCalcuatorClass", "Poly:", nullptr));
        label_4->setText(QApplication::translate("CRCCalcuatorClass", "Init:", nullptr));
        label_5->setText(QApplication::translate("CRCCalcuatorClass", "RefIn:", nullptr));
        label_6->setText(QApplication::translate("CRCCalcuatorClass", "RefOut:", nullptr));
        label_7->setText(QApplication::translate("CRCCalcuatorClass", "XorOut:", nullptr));
        label_8->setText(QApplication::translate("CRCCalcuatorClass", "Alias:", nullptr));
        nameLabel->setText(QString());
        widthLabel->setText(QString());
        polyLabel->setText(QString());
        initLabel->setText(QString());
        refInLabel->setText(QString());
        refOutLabel->setText(QString());
        xOrOutLabel->setText(QString());
        aliasLabel->setText(QString());
        butCalc->setText(QApplication::translate("CRCCalcuatorClass", "Calculate", nullptr));
        label_9->setText(QApplication::translate("CRCCalcuatorClass", "CRC Res:", nullptr));
        butCopyRes->setText(QApplication::translate("CRCCalcuatorClass", "Copy CRC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRCCalcuatorClass: public Ui_CRCCalcuatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRCCALCUATOR_H
