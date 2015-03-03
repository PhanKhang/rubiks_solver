#ifndef METRICS_H
#define METRICS_H
#include "cube.h"

class metrics{
private:
    colors cube[6][3][3];
    int metric[6];
    int whichmax;
public:
    metrics();
    metrics(colors[6][3][3]);
    ~metrics();
    void getMetrics();
    int getMaxMetric();
    colors whichColorHasMax();
    void output();

};

#endif // METRICS_H
