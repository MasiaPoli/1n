#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "findp.h"
#include "conds.h"
int main()
{
    printf("Write a size\n");
    int n;
    scanf("%d", &n);
    double* a=malloc(n*sizeof(double));
    printf("Write an array\n");
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &a[i]);
    }
    printf("Choose a condition, 0 - >0, 1 - <0, 2 - 0\n");
    int c;
    scanf("%d", &c);
    pfnc x;
    switch(c)
    {
    case 0:
        x=morethenzero;
        break;
    case 1:
        x=lessthenzero;
        break;
    case 2:
        x=iszero;
    }
    double* b=find_place(a, n, x);
    if(!b)
    {
        printf("No such elements\n");
    }
    else
    {
        printf("%lf index %d", *b, b-a);
    }
    free (a);
    return 0;
}
