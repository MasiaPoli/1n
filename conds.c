#include "conds.h"
_Bool morethenzero(double x)
{
    return 1 ? (x>0.0) : 0;
}
_Bool lessthenzero(double x)
{
    return 1 ? (x<0.0) : 0;
}
_Bool iszero(double x)
{
    return 1 ? (x==0.0) : 0;
}
