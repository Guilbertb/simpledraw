#ifndef ZONEDESSIN_H
#define ZONEDESSIN_H

#include <QPaintEvent>
#include <QWidget>
#include <QPainter>


class ZoneDessin : public QWidget {

    Q_OBJECT

    public:
        ZoneDessin(QWidget *parent);

    private:
        void paintEvent(QPaintEvent *);

};


#endif // ZONEDESSIN_H
