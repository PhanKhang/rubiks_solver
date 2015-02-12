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

