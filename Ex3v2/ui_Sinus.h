/********************************************************************************
** Form generated from reading UI file 'Sinus.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINUS_H
#define UI_SINUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myQProgressBar.h>

QT_BEGIN_NAMESPACE

class Ui_Sinus
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    myQProgressBar *PB1;
    myQProgressBar *PB2;
    myQProgressBar *PB3;
    myQProgressBar *PB4;
    myQProgressBar *PB5;
    myQProgressBar *PB6;
    myQProgressBar *PB7;
    myQProgressBar *PB8;
    myQProgressBar *PB9;
    myQProgressBar *PB10;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Inici;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Sinus)
    {
        if (Sinus->objectName().isEmpty())
            Sinus->setObjectName(QString::fromUtf8("Sinus"));
        Sinus->resize(538, 425);
        verticalLayout = new QVBoxLayout(Sinus);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 5, -1, -1);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PB1 = new myQProgressBar(Sinus);
        PB1->setObjectName(QString::fromUtf8("PB1"));
        PB1->setMinimum(-100);
        PB1->setValue(0);
        PB1->setOrientation(Qt::Vertical);
        PB1->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB1);

        PB2 = new myQProgressBar(Sinus);
        PB2->setObjectName(QString::fromUtf8("PB2"));
        PB2->setMinimum(-100);
        PB2->setValue(0);
        PB2->setOrientation(Qt::Vertical);
        PB2->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB2);

        PB3 = new myQProgressBar(Sinus);
        PB3->setObjectName(QString::fromUtf8("PB3"));
        PB3->setMinimum(-100);
        PB3->setValue(0);
        PB3->setOrientation(Qt::Vertical);
        PB3->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB3);

        PB4 = new myQProgressBar(Sinus);
        PB4->setObjectName(QString::fromUtf8("PB4"));
        PB4->setMinimum(-100);
        PB4->setValue(0);
        PB4->setOrientation(Qt::Vertical);
        PB4->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB4);

        PB5 = new myQProgressBar(Sinus);
        PB5->setObjectName(QString::fromUtf8("PB5"));
        PB5->setMinimum(-100);
        PB5->setValue(0);
        PB5->setOrientation(Qt::Vertical);
        PB5->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB5);

        PB6 = new myQProgressBar(Sinus);
        PB6->setObjectName(QString::fromUtf8("PB6"));
        PB6->setMinimum(-100);
        PB6->setValue(0);
        PB6->setOrientation(Qt::Vertical);
        PB6->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB6);

        PB7 = new myQProgressBar(Sinus);
        PB7->setObjectName(QString::fromUtf8("PB7"));
        PB7->setMinimum(-100);
        PB7->setValue(0);
        PB7->setOrientation(Qt::Vertical);
        PB7->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB7);

        PB8 = new myQProgressBar(Sinus);
        PB8->setObjectName(QString::fromUtf8("PB8"));
        PB8->setMinimum(-100);
        PB8->setValue(0);
        PB8->setOrientation(Qt::Vertical);
        PB8->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB8);

        PB9 = new myQProgressBar(Sinus);
        PB9->setObjectName(QString::fromUtf8("PB9"));
        PB9->setMinimum(-100);
        PB9->setValue(0);
        PB9->setOrientation(Qt::Vertical);
        PB9->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB9);

        PB10 = new myQProgressBar(Sinus);
        PB10->setObjectName(QString::fromUtf8("PB10"));
        PB10->setMinimum(-100);
        PB10->setValue(0);
        PB10->setOrientation(Qt::Vertical);
        PB10->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(PB10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, -1, -1, -1);
        Inici = new QPushButton(Sinus);
        Inici->setObjectName(QString::fromUtf8("Inici"));
        Inici->setCursor(QCursor(Qt::OpenHandCursor));

        horizontalLayout_3->addWidget(Inici);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(268, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(Sinus);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(65, 193, 218);\n"
""));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Sinus);
        QObject::connect(pushButton, SIGNAL(clicked()), Sinus, SLOT(close()));

        QMetaObject::connectSlotsByName(Sinus);
    } // setupUi

    void retranslateUi(QWidget *Sinus)
    {
        Sinus->setWindowTitle(QCoreApplication::translate("Sinus", "Form", nullptr));
        Inici->setText(QCoreApplication::translate("Sinus", "Inici", nullptr));
        pushButton->setText(QCoreApplication::translate("Sinus", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("Sinus", "Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Sinus: public Ui_Sinus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINUS_H
