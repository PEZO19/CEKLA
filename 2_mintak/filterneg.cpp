#include "cekla.h"
// filterneg(L) = Az L lista negat�v elemeinek list�ja.
list filterneg(const list L)  
{
  if (L == nil) return nil;
  const int X = hd(L); const list TL = tl(L);
  if (X >= 0) 
    return filterneg(TL);
  else return cons(X, filterneg(TL)); 
}




