#include "cekla.h"
// map(F, [x1, ..., xn]) = [F(x1), ..., F(xn)]
list map(const fun1 F, const list L) 
{
    if (L == nil) return nil;
    int TrHd = F(hd(L));
    return cons(TrHd, map(F, tl(L)));
}

int sqr(const int X) { return X*X; }

