#include "seaker.h"
#include <stdio.h>

seaker::seaker()
{

}

seaker::seaker(colors values[6][3][3]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                this->cube[i][j][k] = values[i][j][k];
            }
        }
    }
}


void seaker::findEdges(colors color)
{
    int number=0;
    for (int i = 0; i < 6 ; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (((k==1) || (j==1)) && (j!=k)){
                    if(cube[i][j][k] == color){
                        coordinates[number][0]=i;
                        coordinates[number][1]=j;
                        coordinates[number][2]=k;
                        number++;
                    }
                }
            }
        }
    }
}

colors seaker::getNeighbor(faces face, int level, int place)
{
    if((face==FRONT)&&(level==0)&&(place==1)) return cube[TOP][2][1];
    if((face==FRONT)&&(level==1)&&(place==0)) return cube[LEFT][1][2];
    if((face==FRONT)&&(level==1)&&(place==2)) return cube[RIGHT][1][0];
    if((face==FRONT)&&(level==2)&&(place==1)) return cube[BOTTOM][0][1];

    if((face==TOP)&&(level==0)&&(place==1)) return cube[BACK][0][1];
    if((face==TOP)&&(level==1)&&(place==0)) return cube[LEFT][0][1];
    if((face==TOP)&&(level==1)&&(place==2)) return cube[RIGHT][0][1];
    if((face==TOP)&&(level==2)&&(place==1)) return cube[FRONT][0][1];

    if((face==BOTTOM)&&(level==0)&&(place==1)) return cube[FRONT][2][1];
    if((face==BOTTOM)&&(level==1)&&(place==0)) return cube[LEFT][2][1];
    if((face==BOTTOM)&&(level==1)&&(place==2)) return cube[RIGHT][2][1];
    if((face==BOTTOM)&&(level==2)&&(place==1)) return cube[BACK][2][1];

    if((face==RIGHT)&&(level==0)&&(place==1)) return cube[TOP][1][2];
    if((face==RIGHT)&&(level==1)&&(place==0)) return cube[FRONT][1][2];
    if((face==RIGHT)&&(level==1)&&(place==2)) return cube[BACK][1][0];
    if((face==RIGHT)&&(level==2)&&(place==1)) return cube[BOTTOM][1][2];

    if((face==LEFT)&&(level==0)&&(place==1)) return cube[TOP][1][0];
    if((face==LEFT)&&(level==1)&&(place==0)) return cube[BACK][1][2];
    if((face==LEFT)&&(level==1)&&(place==2)) return cube[FRONT][1][0];
    if((face==LEFT)&&(level==2)&&(place==1)) return cube[BOTTOM][1][0];

    if((face==BACK)&&(level==0)&&(place==1)) return cube[TOP][0][1];
    if((face==BACK)&&(level==1)&&(place==0)) return cube[RIGHT][1][2];
    if((face==BACK)&&(level==1)&&(place==2)) return cube[LEFT][1][0];
    if((face==BACK)&&(level==2)&&(place==1)) return cube[BOTTOM][2][1];
}

faces seaker::getNeighborLocation(faces face, int level, int place)
{
    if((face==FRONT)&&(level==0)&&(place==1)) return TOP;
    if((face==FRONT)&&(level==1)&&(place==0)) return LEFT;
    if((face==FRONT)&&(level==1)&&(place==2)) return RIGHT;
    if((face==FRONT)&&(level==2)&&(place==1)) return BOTTOM;

    if((face==TOP)&&(level==0)&&(place==1)) return BACK;
    if((face==TOP)&&(level==1)&&(place==0)) return LEFT;
    if((face==TOP)&&(level==1)&&(place==2)) return RIGHT;
    if((face==TOP)&&(level==2)&&(place==1)) return FRONT;

    if((face==BOTTOM)&&(level==0)&&(place==1)) return FRONT;
    if((face==BOTTOM)&&(level==1)&&(place==0)) return LEFT;
    if((face==BOTTOM)&&(level==1)&&(place==2)) return RIGHT;
    if((face==BOTTOM)&&(level==2)&&(place==1)) return BACK;

    if((face==RIGHT)&&(level==0)&&(place==1)) return TOP;
    if((face==RIGHT)&&(level==1)&&(place==0)) return FRONT;
    if((face==RIGHT)&&(level==1)&&(place==2)) return BACK;
    if((face==RIGHT)&&(level==2)&&(place==1)) return BOTTOM;

    if((face==LEFT)&&(level==0)&&(place==1)) return TOP;
    if((face==LEFT)&&(level==1)&&(place==0)) return BACK;
    if((face==LEFT)&&(level==1)&&(place==2)) return FRONT;
    if((face==LEFT)&&(level==2)&&(place==1)) return BOTTOM;

    if((face==BACK)&&(level==0)&&(place==1)) return TOP;
    if((face==BACK)&&(level==1)&&(place==0)) return RIGHT;
    if((face==BACK)&&(level==1)&&(place==2)) return LEFT;
    if((face==BACK)&&(level==2)&&(place==1)) return BOTTOM;
}


void seaker::output()
{
    for (int i = 0; i < 4 ; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d,",coordinates[i][j]);

        }
        printf("\n");
    }
}
seaker::~seaker()
{

}

