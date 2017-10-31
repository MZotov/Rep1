#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x[3], y[3], s;
    int i;
    for (i = 0; i <= 3; i++)
        scanf("%f%f/n", x[i], y[i]);
    if ((x[1] - x[0]) * (x[2] - x[0]) + (y[1] - y[0]) * (y[2] - y[0]) == 0)
        s = sqrt((pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2)) * (pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2)));
    else
    if ((x[1] - x[0]) * (x[3] - x[0]) + (y[1] - y[0]) * (y[3] - y[0]) == 0)
        s = sqrt((pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2)) * (pow(x[3] - x[0], 2) + pow(y[3] - y[0], 2)));
    else
    if ((x[3] - x[0]) * (x[2] - x[0]) + (y[3] - y[0]) * (y[2] - y[0]) == 0)
        s = sqrt((pow(x[3] - x[0], 2) + pow(y[3] - y[0], 2)) * (pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2)));
    printf("%f\n", s);
    return 0;
}
