#include "cekla.h"
// revapp(L, L0) = az L lista megfordítása L0 elé fûzve
list revapp(const list L, const list L0) 
{
  if (L == nil) return L0;
  return revapp(tl(L), cons(hd(L), L0));
}

// reverse(L) = az L lista megfordítva
//  Lineáris lépésszámú megoldás
list reverse(const list L) {
  return revapp(L, nil);
}

list appendi(list L1, list L2)
{ 
  return revapp(revapp(L1,nil), L2);
}
