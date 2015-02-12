#include <QCoreApplication>
#include "cube.h"
#include "rotator.h"
#include "seaker.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    colors testCube[6][3][3]; //= new colors[][][];

    {
    testCube[TOP][0][0] = YELLOW;
    testCube[TOP][0][1] = YELLOW;
    testCube[TOP][0][2] = YELLOW;
    testCube[TOP][1][0] = YELLOW;
    testCube[TOP][1][1] = YELLOW;
    testCube[TOP][1][2] = YELLOW;
    testCube[TOP][2][0] = YELLOW;
    testCube[TOP][2][1] = YELLOW;
    testCube[TOP][2][2] = YELLOW;

    testCube[BACK][0][0] = BLUE;
    testCube[BACK][0][1] = BLUE;
    testCube[BACK][0][2] = BLUE;
    testCube[BACK][1][0] = BLUE;
    testCube[BACK][1][1] = BLUE;
    testCube[BACK][1][2] = BLUE;
    testCube[BACK][2][0] = BLUE;
    testCube[BACK][2][1] = BLUE;
    testCube[BACK][2][2] = BLUE;

    testCube[RIGHT][0][0] = ORANGE;
    testCube[RIGHT][0][1] = ORANGE;
    testCube[RIGHT][0][2] = ORANGE;
    testCube[RIGHT][1][0] = ORANGE;
    testCube[RIGHT][1][1] = ORANGE;
    testCube[RIGHT][1][2] = ORANGE;
    testCube[RIGHT][2][0] = ORANGE;
    testCube[RIGHT][2][1] = ORANGE;
    testCube[RIGHT][2][2] = ORANGE;

    testCube[LEFT][0][0] = RED;
    testCube[LEFT][0][1] = RED;
    testCube[LEFT][0][2] = RED;
    testCube[LEFT][1][0] = RED;
    testCube[LEFT][1][1] = RED;
    testCube[LEFT][1][2] = RED;
    testCube[LEFT][2][0] = RED;
    testCube[LEFT][2][1] = RED;
    testCube[LEFT][2][2] = RED;

    testCube[FRONT][0][0] = GREEN;
    testCube[FRONT][0][1] = GREEN;
    testCube[FRONT][0][2] = GREEN;
    testCube[FRONT][1][0] = GREEN;
    testCube[FRONT][1][1] = GREEN;
    testCube[FRONT][1][2] = GREEN;
    testCube[FRONT][2][0] = GREEN;
    testCube[FRONT][2][1] = GREEN;
    testCube[FRONT][2][2] = GREEN;

    testCube[BOTTOM][0][0] = WHITE;
    testCube[BOTTOM][0][1] = WHITE;
    testCube[BOTTOM][0][2] = WHITE;
    testCube[BOTTOM][1][0] = WHITE;
    testCube[BOTTOM][1][1] = WHITE;
    testCube[BOTTOM][1][2] = WHITE;
    testCube[BOTTOM][2][0] = WHITE;
    testCube[BOTTOM][2][1] = WHITE;
    testCube[BOTTOM][2][2] = WHITE;
    }


    seaker * nseaker = new seaker(testCube);
    Rotator * rotator = new Rotator(testCube);

    rotator->outputCube();
    printf("L'\n");
    rotator->rotateLeftFace90CounterClockwise();
    rotator->outputCube();

    printf("R\n");
    rotator->rotateRghtFace90Clockwise();
    rotator->outputCube();

    printf("U'\n");
    rotator->rotateTopFace90CounterClockwise();
    rotator->outputCube();

    printf("D\n");
    rotator->rotateBottomFace90Clockwise();
    rotator->outputCube();

    printf("F\n");
    rotator->rotateFrontFace90Clockwise();
    rotator->outputCube();

    printf("B'\n");
    rotator->rotateBackFace90CounterClockwise();
    rotator->outputCube();

    printf("R\n");
    rotator->rotateRghtFace90Clockwise();
    rotator->outputCube();

    printf("L'\n");
    rotator->rotateLeftFace90CounterClockwise();
    rotator->outputCube();

    printf("\n");
    nseaker->findEdges(WHITE);
    nseaker->output();

    printf("ended");





    //rotator->outputCube();
    return a.exec();
}
