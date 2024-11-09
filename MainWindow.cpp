#include "MainWindow.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    stackedWidget = new QStackedWidget(this);
    setupUI();
    setCentralWidget(stackedWidget);
}

void MainWindow::setupUI() {
    QWidget *loginScreen = createLoginScreen();
    stackedWidget->addWidget(loginScreen);

    QWidget *menuScreen = createMenuScreen();
    QWidget *staffScreen = createStaffManagementScreen();
    QWidget *orderScreen = createOrderManagementScreen();
    QWidget *tableScreen = createTableManagementScreen();
    QWidget *reportScreen = createReportScreen();

    stackedWidget->addWidget(menuScreen);
    stackedWidget->addWidget(staffScreen);
    stackedWidget->addWidget(orderScreen);
    stackedWidget->addWidget(tableScreen);
    stackedWidget->addWidget(reportScreen);
}

void MainWindow::setUserRole(const QString &role) {
    userRole = role;

    if (role == "Quản lý") {
        stackedWidget->setCurrentWidget(createMenuScreen());
    } else if (role == "Nhân viên phục vụ") {
        stackedWidget->setCurrentWidget(createOrderManagementScreen());
    } else if (role == "Nhân viên bếp") {
        stackedWidget->setCurrentWidget(createOrderManagementScreen());
    } else {
        stackedWidget->setCurrentWidget(createMenuScreen());
    }
}

QWidget *MainWindow::createLoginScreen() {
    QWidget *widget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QLineEdit *username = new QLineEdit(widget);
    QLineEdit *password = new QLineEdit(widget);
    password->setEchoMode(QLineEdit::Password);
    loginButton = new QPushButton("Đăng nhập", widget);

    layout->addWidget(new QLabel("Tên đăng nhập:"));
    layout->addWidget(username);
    layout->addWidget(new QLabel("Mật khẩu:"));
    layout->addWidget(password);
    layout->addWidget(loginButton);

    connect(loginButton, &QPushButton::clicked, [this, username, password]() {
        QString enteredUser = username->text();
        QString enteredPass = password->text();
        if (enteredUser == "manager" && enteredPass == "password") {
            setUserRole("Quản lý");
        } else if (enteredUser == "staff" && enteredPass == "password") {
            setUserRole("Nhân viên phục vụ");
        } else {
            setUserRole("Khách hàng");
        }
    });

    return widget;
}

QWidget *MainWindow::createMenuScreen() { /* Tạo UI cho MenuScreen */ }
QWidget *MainWindow::createStaffManagementScreen() { /* Tạo UI cho StaffManagementScreen */ }
QWidget *MainWindow::createOrderManagementScreen() { /* Tạo UI cho OrderManagementScreen */ }
QWidget *MainWindow::createTableManagementScreen() { /* Tạo UI cho TableManagementScreen */ }
QWidget *MainWindow::createReportScreen() { /* Tạo UI cho ReportScreen */ }
