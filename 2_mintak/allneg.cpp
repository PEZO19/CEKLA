#include "cekla.h"
// allneg(L) = Az L lista minden eleme negatív
int allneg(const list L)  
{
  if (L == nil) return true;
  if (hd(L) >= 0) return false;
  return allneg(tl(L)); 
}




