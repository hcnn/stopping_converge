#include <stdio.h>  // printf
#include "stopping_converge.h"

int main()
{
    double lambda = 10;
    double f0 = 10.0;
    double f1 = 10.1;
    bool res;
    
    res = stopping_converge(f1, f0, lambda);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");

    res = stopping_converge(f1, f0, 1.0);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");

    res = stopping_converge(f1, f0, 0.9);
    printf("%s\n", res ? "true -> stop" : "false -> proceed");
}
