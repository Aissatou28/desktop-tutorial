/********************************************************************************
** Form generated from reading UI file 'Projet2.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJET2_H
#define UI_PROJET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Projet2Class
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label;
    QPushButton *ouvrirPort;
    QLabel *statusPort;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *envoyerBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Projet2Class)
    {
        if (Projet2Class->objectName().isEmpty())
            Projet2Class->setObjectName(QString::fromUtf8("Projet2Class"));
        Projet2Class->resize(600, 400);
        centralWidget = new QWidget(Projet2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 20, 101, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 31, 16));
        ouvrirPort = new QPushButton(centralWidget);
        ouvrirPort->setObjectName(QString::fromUtf8("ouvrirPort"));
        ouvrirPort->setGeometry(QRect(60, 50, 131, 23));
        statusPort = new QLabel(centralWidget);
        statusPort->setObjectName(QString::fromUtf8("statusPort"));
        statusPort->setGeometry(QRect(330, 40, 121, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 101, 21));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 130, 511, 151));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 300, 411, 20));
        envoyerBtn = new QPushButton(centralWidget);
        envoyerBtn->setObjectName(QString::fromUtf8("envoyerBtn"));
        envoyerBtn->setGeometry(QRect(434, 300, 81, 23));
        Projet2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Projet2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Projet2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Projet2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Projet2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Projet2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Projet2Class->setStatusBar(statusBar);

        retranslateUi(Projet2Class);
        QObject::connect(ouvrirPort, SIGNAL(clicked()), Projet2Class, SLOT(onOpenButtonClicked()));
        QObject::connect(envoyerBtn, SIGNAL(clicked()), Projet2Class, SLOT(onSendMessageButtonClicked()));

        QMetaObject::connectSlotsByName(Projet2Class);
    } // setupUi

    void retranslateUi(QMainWindow *Projet2Class)
    {
        Projet2Class->setWindowTitle(QCoreApplication::translate("Projet2Class", "Projet2", nullptr));
        label->setText(QCoreApplication::translate("Projet2Class", "Port:", nullptr));
        ouvrirPort->setText(QCoreApplication::translate("Projet2Class", "Ouvrir le port", nullptr));
        statusPort->setText(QCoreApplication::translate("Projet2Class", "Statut du port: ferm\303\251", nullptr));
        label_3->setText(QCoreApplication::translate("Projet2Class", "Donn\303\251es re\303\247ues:", nullptr));
        envoyerBtn->setText(QCoreApplication::translate("Projet2Class", "Envoyer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Projet2Class: public Ui_Projet2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJET2_H
