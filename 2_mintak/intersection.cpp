#include "cekla.h"

// ismember(X, L) = Az X érték eleme az L listának
int ismember(const int X, const list L)  
{
  if (L == nil) return 0 ;
  if (hd(L) == X) return 1;
  return ismember(X, tl(L)); 
}

// intersection(L1, L2) = L1 és L2 közös elemeinek listája.
// Feltételezzük, hogy L1 és L2 ismétlõdésmentes lista.
list intersection(const list L1, const list L2) {
  if (L1 == nil) return nil;
  const list L3 = intersection(tl(L1), L2);
  const int X = hd(L1);
  if (ismember(X, L2)) 
    return cons(X, L3);
  else return L3;                               }
