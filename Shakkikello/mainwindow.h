#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
using namespace std;
#include <QMainWindow>
#include <QTimer>

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
    void switchPlayers();
    void startAndReset();
    void progressionBar();
    void progressionBar2();



private:
    Ui::MainWindow *ui;
QTimer *objectTimer1;
    QTimer *objectTimer2;
    short player1Time=0;
    short player2Time=0;
    int gameTimer;


};

#endif // MAINWINDOW_H
