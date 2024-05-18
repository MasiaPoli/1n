#ifndef FINDP_H
#define FINDP_H
typedef _Bool (*pfnc) (double);
/*»щет первый элемент, который удовлетвор€ет условию*/
double* find_place (double* a, size_t n, pfnc x);
#endif // FINDP_H
