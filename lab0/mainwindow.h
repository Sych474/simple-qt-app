#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "logic.h"
#include "appcontext.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_DecrimentBtn_clicked();

    void on_IncrementBtn_clicked();

    void on_ResetBtn_clicked();

private:
    Ui::MainWindow *ui;
    AppContext currentContext;
    void UpdateLabels();
    QPushButton btn;
};
#endif // MAINWINDOW_H
