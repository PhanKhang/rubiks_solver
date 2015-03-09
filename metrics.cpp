#include "metrics.h"
#include "seaker.h"
#include <stdio.h>
#include <stdlib.h>
metrics::metrics()
{
}

metrics::metrics(colors values[6][3][3] )
{
    for (int i = 0; i < 6; i++) {
        metric[i]=0;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                this->cube[i][j][k] = values[i][j][k];
            }
        }
    }
}



void metrics::getMetrics()
{
    seaker * seakerz = new seaker(cube);
    faces neighborLocation;
    for(int i = 0; i < 6; i++){
        if(cube[i][0][1] == cube[i][1][1]) {
            metric[i]++;
            neighborLocation = seakerz->getNeighborLocation((faces)i,0,1);
            if (seakerz->getNeighbor((faces)i,0,1) == cube[neighborLocation][1][1]) metric[i]++;
        }
        if(cube[i][1][0] == cube[i][1][1]) {
            metric[i]++;
            neighborLocation = seakerz->getNeighborLocation((faces)i,1,0);
            if (seakerz->getNeighbor((faces)i,1,0) == cube[neighborLocation][1][1]) metric[i]++;
        }
        if(cube[i][1][2] == cube[i][1][1]) {
            metric[i]++;
            neighborLocation = seakerz->getNeighborLocation((faces)i,1,2);
            if (seakerz->getNeighbor((faces)i,1,2) == cube[neighborLocation][1][1]) metric[i]++;
        }
        if(cube[i][2][1] == cube[i][1][1]) {
            metric[i]++;
            neighborLocation = seakerz->getNeighborLocation((faces)i,2,1);
            if (seakerz->getNeighbor((faces)i,2,1) == cube[neighborLocation][1][1]) metric[i]++;
        }
    }

    free (seakerz);
}

int metrics::getMaxMetric()
{
    int max=0;
    for(int i = 0; i < 6; i++){
        if(metric[i] > max) {
            max = metric[i];
            whichmax = i;
        }
    }
    return max;
}



colors metrics::whichColorHasMax()
{
    return cube[whichmax][1][1];
}

void metrics::output()
{

    printf("%d\n",getMaxMetric());
    printf("%d",this->whichColorHasMax());
    free (*cube);
}

metrics::~metrics()
{

}
