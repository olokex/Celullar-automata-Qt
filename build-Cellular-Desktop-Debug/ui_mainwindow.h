/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mywidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *step;
    QLabel *label_iteration;
    QPushButton *reStart;
    QSlider *grid_size_slider;
    QLabel *label_density;
    QPushButton *iterate;
    QLineEdit *line_edit_iterations;
    MyWidget *widget;
    QSlider *density_slider;
    QLabel *label_iterations_text;
    QLabel *grid_size_text;
    QLabel *label_density_text;
    QLabel *label_grid_size;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(875, 664);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        step = new QPushButton(centralwidget);
        step->setObjectName(QString::fromUtf8("step"));
        step->setGeometry(QRect(630, 20, 88, 27));
        label_iteration = new QLabel(centralwidget);
        label_iteration->setObjectName(QString::fromUtf8("label_iteration"));
        label_iteration->setEnabled(true);
        label_iteration->setGeometry(QRect(710, 60, 67, 19));
        reStart = new QPushButton(centralwidget);
        reStart->setObjectName(QString::fromUtf8("reStart"));
        reStart->setGeometry(QRect(740, 20, 88, 27));
        grid_size_slider = new QSlider(centralwidget);
        grid_size_slider->setObjectName(QString::fromUtf8("grid_size_slider"));
        grid_size_slider->setGeometry(QRect(630, 130, 221, 16));
        grid_size_slider->setMinimum(10);
        grid_size_slider->setMaximum(500);
        grid_size_slider->setSingleStep(1);
        grid_size_slider->setOrientation(Qt::Horizontal);
        label_density = new QLabel(centralwidget);
        label_density->setObjectName(QString::fromUtf8("label_density"));
        label_density->setGeometry(QRect(690, 170, 67, 19));
        iterate = new QPushButton(centralwidget);
        iterate->setObjectName(QString::fromUtf8("iterate"));
        iterate->setGeometry(QRect(760, 240, 88, 27));
        line_edit_iterations = new QLineEdit(centralwidget);
        line_edit_iterations->setObjectName(QString::fromUtf8("line_edit_iterations"));
        line_edit_iterations->setGeometry(QRect(630, 240, 113, 27));
        widget = new MyWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 600, 600));
        density_slider = new QSlider(centralwidget);
        density_slider->setObjectName(QString::fromUtf8("density_slider"));
        density_slider->setGeometry(QRect(630, 200, 221, 16));
        density_slider->setMaximum(100);
        density_slider->setOrientation(Qt::Horizontal);
        label_iterations_text = new QLabel(centralwidget);
        label_iterations_text->setObjectName(QString::fromUtf8("label_iterations_text"));
        label_iterations_text->setGeometry(QRect(630, 60, 81, 19));
        grid_size_text = new QLabel(centralwidget);
        grid_size_text->setObjectName(QString::fromUtf8("grid_size_text"));
        grid_size_text->setGeometry(QRect(630, 100, 71, 19));
        label_density_text = new QLabel(centralwidget);
        label_density_text->setObjectName(QString::fromUtf8("label_density_text"));
        label_density_text->setGeometry(QRect(630, 170, 67, 19));
        label_grid_size = new QLabel(centralwidget);
        label_grid_size->setObjectName(QString::fromUtf8("label_grid_size"));
        label_grid_size->setGeometry(QRect(700, 100, 67, 19));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 875, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        step->setText(QCoreApplication::translate("MainWindow", "Step", nullptr));
        label_iteration->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        reStart->setText(QCoreApplication::translate("MainWindow", "Re-start", nullptr));
        label_density->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
        iterate->setText(QCoreApplication::translate("MainWindow", "Iterate", nullptr));
        line_edit_iterations->setPlaceholderText(QCoreApplication::translate("MainWindow", "Iterations", nullptr));
        label_iterations_text->setText(QCoreApplication::translate("MainWindow", "Iteration(s):", nullptr));
        grid_size_text->setText(QCoreApplication::translate("MainWindow", "Grid size:", nullptr));
        label_density_text->setText(QCoreApplication::translate("MainWindow", "Density:", nullptr));
        label_grid_size->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
