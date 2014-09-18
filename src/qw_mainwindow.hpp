#ifndef QWIDGET_MAINWINDOW_HPP
#define QWIDGET_MAINWINDOW_HPP

#include <QWidget>
#include <QFileInfo>
class QGridLayout;
class QProgressBar;
class QFlamingoView;

class FlamingoMainWindow : public QWidget {
    Q_OBJECT
public: //Methods
    FlamingoMainWindow(QFileInfoList);
    void closeEvent(QCloseEvent *);
    void keyPressEvent(QKeyEvent *);
signals:
    void closed();
private slots:
    void setStatusBusy(QString);
    void setStatusOK();
private: //Widgets
    FlamingoMainWindow();
    QGridLayout *layoutMain = nullptr;
    QFlamingoView *fview = nullptr;
    QProgressBar *iprogbar = nullptr;
};

#endif // QWIDGET_MAINWINDOW_HPP
