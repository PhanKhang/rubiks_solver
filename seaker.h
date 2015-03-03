#ifndef SEAKER_H
#define SEAKER_H
#include "cube.h"

class seaker{
private:
    colors cube[6][3][3];
    int coordinates[4][3];
public:
    seaker();
    seaker(colors[6][3][3]);
    ~seaker();
    void findEdges(colors color);
    colors getNeighbor(faces face, int level, int place);
    faces getNeighborLocation (faces face, int level, int place);
    void output();

};

#endif // SEAKER_H
