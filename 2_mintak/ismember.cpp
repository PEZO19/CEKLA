#include "cekla.h"
// ismember(X, L) = Az X érték eleme az L listának
int ismember(const int X, const list L)  
{
  if (L == nil) return false;
  if (hd(L) == X) return true;
  return ismember(X, tl(L)); 
}




