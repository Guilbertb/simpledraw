#include "zonedessin.h"

#include <QDebug>


// ceci est un constructeur de de la classe
// avec qDebug je vois que qd on execute il y va ! mais je ne vois nul part ou ou on l'instancie dans le code
ZoneDessin::ZoneDessin(QWidget *)
{
qDebug()<<"hi";
}


// ici comment on appel ce genre de chose , un heritage de QPaintEvent ? et on ajoute des actions?
void ZoneDessin::paintEvent(QPaintEvent *)
{
    QPainter painter(this);   // painter est un objet de type QPainter , this pour zonedessin?
                                // this pour ici , cette classe ?

        // mes dessins
//setStyleSheet("background-color:rgb(255, 255, 255); margin:0;padding:0;margin:0");
    // Définition de la variable
    QPolygon myPolygon;      // my polygon est un objet de type QPolygon ... (instanciation statique ?)
    // Rajout de 1 point
    myPolygon.putPoints(0, 1, 10, 20);  // on utilise l'objet en lui passant des paramètres?
    // Rajout de 2 points
    myPolygon.putPoints(1, 2, 100, 70, 120, 100);
    // Rajout de 1 point
    myPolygon.putPoints(3, 1, 100, 200);

    // On dessine le polygone définit plus haut
    painter.drawPolygon(myPolygon, Qt::WindingFill);  // l'objet painter dispose d'une fonction pour dessiner un polygone  par contre
                                                // Qt::WindingFill   c'est une constante qui permet de dire a cette fonction qu'on veut tout remplir
                                                // il pourrait en etre autrement?

    painter.end();  // a quoi peut bien servir cette ligne ? prevenir qu'on a fini le dessin?
}
