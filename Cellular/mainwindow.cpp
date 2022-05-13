#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    constexpr int SIZE = 10;
    ui->setupUi(this);
    ui->widget->setGridSize(SIZE, SIZE);
    ui->label_density->setNum(density);
    ui->density_slider->setValue(density);
    ui->label_grid_size->setNum(SIZE);
    ui->grid_size_slider->setValue(SIZE);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::generate() {
    MyWidget &grid = *ui->widget;

    QColor color;
    for (int y = 0; y < grid.rows(); y++) {
        for (int x = 0; x < grid.cols(); x++) {
            if (x == 0 || y == 0 || x == grid.cols() - 1 || y == grid.rows() - 1) {
                color = Qt::black;
            } else {
                color = rand() % 100 < density ? Qt::black : Qt::white;
            }
            grid[{x,y}] = color;
        }
    }
    grid.update();
}

void MainWindow::on_reStart_clicked()
{
    iteration = 0;
    ui->label_iteration->setNum(iteration);
    started = true;
    generate();
}

void MainWindow::on_step_clicked()
{
    if (!started) return;
    ui->label_iteration->setNum(++iteration);
    MyWidget &grid = *ui->widget;

    for (int y = 1; y < grid.rows() - 1; y++) {
        for (int x = 1; x < grid.cols() - 1; x++) {
            int wall = 0;
            if (grid[{x-1,y}] == Qt::black) wall++;
            if (grid[{x+1,y}] == Qt::black) wall++;
            if (grid[{x-1,y-1}] == Qt::black) wall++;
            if (grid[{x+1,y+1}] == Qt::black) wall++;
            if (grid[{x-1,y+1}] == Qt::black) wall++;
            if (grid[{x+1,y-1}] == Qt::black) wall++;

            if (wall <= 3) {
                grid[{y,x}] = Qt::white;
            } else {
                grid[{y,x}] = Qt::black;
            }
        }
    }

    grid.update();
}

void MainWindow::on_iterate_clicked()
{
    int iterations = ui->line_edit_iterations->text().toInt();
    for (int i = 0; i < iterations; i++) {
        MainWindow::on_step_clicked();
    }
}

void MainWindow::on_grid_size_slider_valueChanged(int value)
{
    ui->label_grid_size->setNum(value);
    ui->widget->setGridSize(value, value);
    MainWindow::generate();
}

void MainWindow::on_density_slider_valueChanged(int value)
{
    ui->label_density->setNum(value);
    density = value;
}
