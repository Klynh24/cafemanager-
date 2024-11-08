#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "CafeManagement.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addEmployeeButton_clicked();
    void on_displayEmployeesButton_clicked();
    void on_addProductButton_clicked();
    void on_displayMenuButton_clicked();
    void on_createOrderButton_clicked();

private:
    Ui::MainWindow *ui;
    CafeManagement cafeManagement;  // Đối tượng quản lý quán cà phê
};

#endif // MAINWINDOW_H
