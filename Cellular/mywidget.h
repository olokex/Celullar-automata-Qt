#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QColor>
#include <QPainter>
#include <iostream>

class Cell {
public:
    Cell() {}
    Cell(QColor value) : _read(value), _write(value) {}
    Cell(Qt::GlobalColor value) : Cell(static_cast<QColor>(value)) {}
    Cell& operator=(Qt::GlobalColor value) { _write = value; return *this; }
    Cell& operator=(QColor value) { _write = value; return *this; }
    operator QColor() const { return _read; }
    bool operator==(const Cell &rhs) const { return _read == rhs._read; }
    void update() { std::swap(_read, _write); }
private:
   QColor _read;
   QColor _write;
};

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr) : QWidget(parent) {
        setGridSize(10, 10);
    }

    void setGridSize(int cols, int rows) {
        _rows = rows;
        _cols = cols;
        _grid.resize(cols * rows);
    }

    Cell& operator[](std::pair<int, int> xy) {
        return _grid[xy.second * _cols + xy.first];
    }

    int rows() const { return _rows; }
    int cols() const { return _cols; }

    void update() {
        for (auto &cell : _grid) cell.update();
        QWidget::update();
    }


signals:


private:
    int _rows;
    int _cols;
    std::vector<Cell> _grid;

    virtual void paintEvent(QPaintEvent *event) override
    {
        QPainter painter(this);
        painter.setPen(Qt::NoPen);
        int rectWidth = width() / _rows;
        int rectHeight = height() / _cols;
        rectWidth = rectHeight = std::min(rectWidth, rectHeight);
        for (int y = 0; y < _rows; y++) {
            for (int x = 0; x < _cols; x++) {
                painter.setBrush(QBrush(((*this)[{x, y}])));
                painter.drawRect(QRect(x * rectWidth, y * rectHeight, rectWidth, rectHeight));
            }
        }
    }


};

#endif // MYWIDGET_H
