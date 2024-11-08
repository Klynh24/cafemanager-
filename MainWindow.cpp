#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_addEmployeeButton_clicked() {
    QString name = ui->employeeNameInput->text();
    QString position = ui->employeePositionInput->text();
    cafeManagement.addEmployee(name.toStdString(), position.toStdString());
    QMessageBox::information(this, "Success", "Employee added successfully!");
}

void MainWindow::on_displayEmployeesButton_clicked() {
    // Logic để hiển thị nhân viên
    cafeManagement.displayEmployees();
}

void MainWindow::on_addProductButton_clicked() {
    QString name = ui->productNameInput->text();
    double price = ui->productPriceInput->text().toDouble();
    cafeManagement.addProduct(name.toStdString(), price);
    QMessageBox::information(this, "Success", "Product added successfully!");
}

void MainWindow::on_displayMenuButton_clicked() {
    cafeManagement.displayMenu();
}

void MainWindow::on_createOrderButton_clicked() {
    cafeManagement.createOrder();
}
