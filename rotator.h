#ifndef ROTATOR_H
#define ROTATOR_H
#include "cube.h"

class Rotator
{   
private:
    colors cube[6][3][3];
    void swap(int * a, int * b);
public:
    Rotator();
    Rotator(colors[6][3][3]);
    ~Rotator();
    void rotateTopFace90CounterClockwise();
    void rotateTopFace90Clockwise();
    void rotateRghtFace90CounterClockwise();
    void rotateRghtFace90Clockwise();
    void rotateBackFace90CounterClockwise();
    void rotateBackFace90Clockwise();
    void rotateBottomFace90CounterClockwise();
    void rotateBottomFace90Clockwise();
    void rotateLeftFace90CounterClockwise();
    void rotateLeftFace90Clockwise();
    void rotateFrontFace90CounterClockwise();
    void rotateFrontFace90Clockwise();
    void rotationNumber(int numb);
    void copyCube();

    colors copyOfCube[6][3][3];

    void outputCube();
};

#endif // ROTATOR_H
