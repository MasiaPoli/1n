#include <stdio.h>
#include <stdlib.h>
#include "findp.h"
#include "conds.h"
double* find_place (double* a, size_t n, pfnc x)
{
    for(double* it=a; it!=a+n; it++)
    {
        if(x(*it))
        {
            return it;
        }
    }
    return NULL;
}
