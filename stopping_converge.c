#include "stopping_converge.h"

/* true  = yes,stop
 * false = no,proceed */
bool stopping_converge(double f1, double f0, double lambda)
{
    return (f1 >= lambda*f0) ? true : false;
}
