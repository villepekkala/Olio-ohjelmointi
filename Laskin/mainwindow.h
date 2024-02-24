#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void numberClickedHandler();
      void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();

private:
    Ui::MainWindow *ui;
    QString number2;
    QString newNumber2;
    double Number;
    QString result;
    double secondNum, labelNumber;






};
#endif // MAINWINDOW_H
