#include "cekla.h"
// ismember(X, L) = Az X �rt�k eleme az L list�nak
int ismember(const int X, const list L)  
{
  if (L == nil) return false;
  if (hd(L) == X) return true;
  return ismember(X, tl(L)); 
}




