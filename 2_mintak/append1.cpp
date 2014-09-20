#include "cekla.h"
// append(L1, L2) = L1 ++ L2 (L1 es L2 osszefuzese)}
list append(const list L0, const list L2)  
{
  if (L0 == nil) return L2;
  const int X = hd(L0);
  const list L1 = tl(L0);
  const list L3 = append(L1, L2);
  return cons(X, L3); 
}




