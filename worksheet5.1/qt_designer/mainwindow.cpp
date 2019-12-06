#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stockitem.h"
#include "edititemdialog.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    // Link the ListModel to the ListView
    ui->listView->setModel( &stockList );
    // Tell this list view to only accept single selections
    ui->listView->setSelectionBehavior( QAbstractItemView::SelectItems );
    // Connect the released() signal of the addButton object to the handleAddButton slot in this object
    connect( ui->add, &QPushButton::released, this, &MainWindow::handleAdd);
    connect( ui->edit, &QPushButton::released, this, &MainWindow::handleEdit );
    connect( ui->remove, &QPushButton::released, this, &MainWindow::handleRemove );
    connect( this, &MainWindow::statusUpdateMessage, ui->statusBar, &QStatusBar::showMessage );
}
MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::handleAdd() {
    StockItem item;
    stockList.addItem( item );
    emit statusUpdateMessage( QString("Add button was clicked"), 0 );
}


void MainWindow::handleEdit() {
    EditItemDialog dialog( this );
    QModelIndexList selectedList;
    selectedList = ui->listView->selectionModel()->selectedIndexes();
    if( selectedList.length() == 1 ) {
        // selectedList is a list of all selected items in the listView. Since we set its
        // behaviour to single selection, were only interested in the first selecteded item.
        StockItem item = stockList.getItem( selectedList[0] );
        if( dialog.runDialog( item ) ) {
            // user clicked ok, need to update item in list...
            stockList.setItem( item, selectedList[0] );
        }
    } else {
        emit statusUpdateMessage( QString("No item selected to edit!"), 0 );
    }
}


void MainWindow::handleRemove() {
    QModelIndexList selectedList;
    selectedList = ui->listView->selectionModel()->selectedIndexes();
    stockList.removeItem(selectedList[0]);
    emit statusUpdateMessage(QString("Remove button was clicked"), 0);

}

void MainWindow::on_actionsaveAs_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                                                    "/home/jana/untitled.png",
                                                    tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "saveAs";
}




