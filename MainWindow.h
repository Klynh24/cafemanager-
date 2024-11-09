#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QPushButton>
#include <QWidget>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void setUserRole(const QString &role);

private:
    QStackedWidget *stackedWidget;
    QWidget *createLoginScreen();
    QWidget *createMenuScreen();
    QWidget *createStaffManagementScreen();
    QWidget *createOrderManagementScreen();
    QWidget *createTableManagementScreen();
    QWidget *createReportScreen();

    QPushButton *loginButton;
    QString userRole;

    void setupUI();
    void showScreen(QWidget *screen);
};

#endif // MAINWINDOW_H
