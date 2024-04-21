/********************************************************************************
** Form generated from reading UI file 'notes.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_H
#define UI_NOTES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notes
{
public:
    QWidget *tab;
    QGridLayout *gridLayout;
    QPlainTextEdit *pteText;

    void setupUi(QTabWidget *Notes)
    {
        if (Notes->objectName().isEmpty())
            Notes->setObjectName("Notes");
        Notes->resize(650, 396);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName("gridLayout");
        pteText = new QPlainTextEdit(tab);
        pteText->setObjectName("pteText");
        QFont font;
        font.setPointSize(16);
        pteText->setFont(font);

        gridLayout->addWidget(pteText, 0, 0, 1, 1);

        Notes->addTab(tab, QString());

        retranslateUi(Notes);

        QMetaObject::connectSlotsByName(Notes);
    } // setupUi

    void retranslateUi(QTabWidget *Notes)
    {
        Notes->setWindowTitle(QCoreApplication::translate("Notes", "TabWidget", nullptr));
        Notes->setTabText(Notes->indexOf(tab), QCoreApplication::translate("Notes", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notes: public Ui_Notes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_H
