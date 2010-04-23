#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "graphicsthing.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void set_scale(double new_scale);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_scene;
    QList<GraphicsThing*> m_things;

    void layout_things();
};

#endif // MAINWINDOW_H
