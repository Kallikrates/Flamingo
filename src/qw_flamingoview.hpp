#ifndef QO_FLAMINGOVIEWMGR_HPP
#define QO_FLAMINGOVIEWMGR_HPP

#include <memory>

#include <QWidget>
#include <QFileInfo>

#include "qw_imgview.hpp"
#include "qo_hotloadimage.hpp"
#include "qreversiblelistiterator.hpp"

class QFlamingoView : public QImageView {
    Q_OBJECT
public: //Methods
    QFlamingoView(QFileInfoList fi, QWidget *parent = 0);
signals:
    void statusUpdate(QString);
public slots:
    void Next();
    void Prev();
private slots:
    void handleQHLIStatus(QString);
private:
    QHotLoadImageBay qhlib;
};

#endif // QO_FLAMINGOVIEWMGR_HPP
