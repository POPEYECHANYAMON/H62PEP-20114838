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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QCheckBox *reorder;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *name;
    QLabel *label;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QDoubleSpinBox *unitCost;
    QLabel *label_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *stockLevel;
    QLabel *label_3;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QString::fromUtf8("EditItemDialog"));
        EditItemDialog->resize(624, 446);
        layoutWidget = new QWidget(EditItemDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 290, 214, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        frame = new QFrame(EditItemDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(130, 70, 311, 201));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        reorder = new QCheckBox(frame);
        reorder->setObjectName(QString::fromUtf8("reorder"));
        reorder->setGeometry(QRect(10, 150, 111, 41));
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(12, 12, 241, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        name = new QLineEdit(layoutWidget1);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout_2->addWidget(name);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        layoutWidget2 = new QWidget(frame);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(12, 50, 241, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        unitCost = new QDoubleSpinBox(layoutWidget2);
        unitCost->setObjectName(QString::fromUtf8("unitCost"));

        horizontalLayout_3->addWidget(unitCost);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        layoutWidget3 = new QWidget(frame);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(12, 110, 241, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        stockLevel = new QSpinBox(layoutWidget3);
        stockLevel->setObjectName(QString::fromUtf8("stockLevel"));

        horizontalLayout_4->addWidget(stockLevel);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);


        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditItemDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditItemDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QApplication::translate("EditItemDialog", "Dialog", nullptr));
        reorder->setText(QApplication::translate("EditItemDialog", "CheckBox", nullptr));
        label->setText(QApplication::translate("EditItemDialog", "Item Name", nullptr));
        label_2->setText(QApplication::translate("EditItemDialog", "Item Cost", nullptr));
        label_3->setText(QApplication::translate("EditItemDialog", "Stock Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
