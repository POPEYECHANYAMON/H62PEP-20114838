/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QString::fromUtf8("EditItemDialog"));
        EditItemDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(EditItemDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditItemDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditItemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QApplication::translate("EditItemDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
