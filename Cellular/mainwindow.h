#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include <QDebug>
#include <QAbstractScrollArea>
#include <vector>
#include <QGraphicsItem>
#include <QLabel>
#include <array>
#include <QLineEdit>
#include "mywidget.h"

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

    void on_reStart_clicked();

    void on_step_clicked();

    void on_iterate_clicked();

    void on_grid_size_slider_valueChanged(int value);

    void on_density_slider_valueChanged(int value);

private:
    void generate();
    Ui::MainWindow *ui;
    QGraphicsScene *scene = new QGraphicsScene();
    int iteration = 0;
    int density = 65;
    bool started = false;
};
#endif // MAINWINDOW_H
