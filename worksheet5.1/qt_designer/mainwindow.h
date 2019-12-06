#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAbstractListModel>
#include <QDialog>
#include "stockitemlistmodel.h"
#include "stockitem.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	


public slots:
	  void handleAdd();
	  void handleEdit();
	  void handleRemove();


signals:
	void statusUpdateMessage(const QString& message, int timeout);


private slots:
	void on_actionsaveAs_triggered();

private:
    Ui::MainWindow *ui;
	StockItemListModel stockList;
	
	
};

#endif // MAINWINDOW_H
