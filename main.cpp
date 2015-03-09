#include <QCoreApplication>
#include <QGlobal.h>
#include "cube.h"
#include "metrics.h"
#include "rotator.h"
#include "seaker.h"
#include <stdio.h>
#include <QTime>
#include <QString>
#include <QDebug>




int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    colors testCube[6][3][3]; //= new colors[][][];

    char states[13][13][13][13];



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







/*
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

    rotator->copyCube();
*/
//random mixer
Rotator * randomMixer = new Rotator(testCube);
int rnd;
for(int mix=0; mix<100; mix++){
    rnd = qrand() % ((6 + 1) - 0) + 0;
    randomMixer->rotationNumber(rnd - 6);
}
randomMixer->copyCube();
colors mixedCube[6][3][3];
for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            mixedCube[i][j][k] = randomMixer->copyOfCube[i][j][k];
        }
    }
}
free(randomMixer);

/*
    QTime timer;
    timer.start();





    for (int i = -6; i <= 6; i++) {
        for (int j = -6; j <= 6; j++) {
            for (int k = -6; k <= 6; k++) {
                for (int l = -6; l <= 6; l++) {
                    for (int m = -6; m <= 6; m++) {
                        Rotator * rotator = new Rotator(mixedCube);
                        rotator->rotationNumber(i);
                        rotator->rotationNumber(j);
                        rotator->rotationNumber(k);
                        rotator->rotationNumber(l);
                        rotator->rotationNumber(m);
                        rotator->copyCube();
                        metrics * metric = new metrics(rotator->copyOfCube);
                        metric->getMetrics();
                        free(metric);
                        free(rotator);
                        //metric->output();

                    }
                }
            }
        }
    }


    int runtime = timer.elapsed(); //gets the runtime in ms

    printf("%d ended",runtime);

*/





//letter mixer
Rotator * mixer = new Rotator(testCube);

QString sometext = ",-6,-5,-2,+2,+1";
qDebug() << sometext;



int pos = sometext.indexOf(",");
while(pos+3<sometext.size()){
    pos = sometext.indexOf(",");
    qDebug() << sometext.mid(pos+1,2).toInt();
    int movement = sometext.mid(pos+1,2).toInt();
    mixer->rotationNumber(movement);


    sometext=sometext.replace(pos,1," ");
}
colors mixedCube1[6][3][3];
for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            mixedCube1[i][j][k] = mixer->copyOfCube[i][j][k];
        }
    }
}
//printf(sometext);
free(mixer);
printf("ENDED");


    return a.exec();
}

