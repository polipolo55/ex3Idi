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
    myQProgressBar *u;
    myQProgressBar *dos;
    myQProgressBar *tres;
    myQProgressBar *quatr;
    myQProgressBar *cinc;
    myQProgressBar *sis;
    myQProgressBar *set;
    myQProgressBar *vuit;
    myQProgressBar *nou;
    myQProgressBar *deu;
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
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        u = new myQProgressBar(Sinus);
        u->setObjectName(QString::fromUtf8("u"));
        u->setMinimum(-100);
        u->setValue(0);
        u->setOrientation(Qt::Vertical);
        u->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(u);

        dos = new myQProgressBar(Sinus);
        dos->setObjectName(QString::fromUtf8("dos"));
        dos->setMinimum(-100);
        dos->setValue(0);
        dos->setOrientation(Qt::Vertical);
        dos->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(dos);

        tres = new myQProgressBar(Sinus);
        tres->setObjectName(QString::fromUtf8("tres"));
        tres->setMinimum(-100);
        tres->setValue(0);
        tres->setOrientation(Qt::Vertical);
        tres->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(tres);

        quatr = new myQProgressBar(Sinus);
        quatr->setObjectName(QString::fromUtf8("quatr"));
        quatr->setMinimum(-100);
        quatr->setValue(0);
        quatr->setOrientation(Qt::Vertical);
        quatr->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(quatr);

        cinc = new myQProgressBar(Sinus);
        cinc->setObjectName(QString::fromUtf8("cinc"));
        cinc->setMinimum(-100);
        cinc->setValue(0);
        cinc->setOrientation(Qt::Vertical);
        cinc->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(cinc);

        sis = new myQProgressBar(Sinus);
        sis->setObjectName(QString::fromUtf8("sis"));
        sis->setMinimum(-100);
        sis->setValue(0);
        sis->setOrientation(Qt::Vertical);
        sis->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(sis);

        set = new myQProgressBar(Sinus);
        set->setObjectName(QString::fromUtf8("set"));
        set->setMinimum(-100);
        set->setValue(0);
        set->setOrientation(Qt::Vertical);
        set->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(set);

        vuit = new myQProgressBar(Sinus);
        vuit->setObjectName(QString::fromUtf8("vuit"));
        vuit->setMinimum(-100);
        vuit->setValue(0);
        vuit->setOrientation(Qt::Vertical);
        vuit->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(vuit);

        nou = new myQProgressBar(Sinus);
        nou->setObjectName(QString::fromUtf8("nou"));
        nou->setMinimum(-100);
        nou->setValue(0);
        nou->setOrientation(Qt::Vertical);
        nou->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(nou);

        deu = new myQProgressBar(Sinus);
        deu->setObjectName(QString::fromUtf8("deu"));
        deu->setMinimum(-100);
        deu->setValue(0);
        deu->setOrientation(Qt::Vertical);
        deu->setInvertedAppearance(false);

        horizontalLayout_2->addWidget(deu);


        verticalLayout->addLayout(horizontalLayout_2);

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
