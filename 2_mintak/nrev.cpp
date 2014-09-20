#include "cekla.h"
// append(L1, L2) = L1 ++ L2 (L1 és L2 összefûzése)}
list append(const list L1, const list L2)  
{
  if (L1 == nil) return L2;
  // writeln(hd(L1));
  // writeln(tl(L1));
  return cons(hd(L1), 
	      append(tl(L1), L2)); 
}

// nrev(L) = az L lista megfordítva
// Naív (négyzetes lépésszámú) megoldás
list nrev(const list L) {
  if (L == nil) 
    return nil;
// writeln(hd(L));
// writeln(tl(L));
  return append(nrev(tl(L)), 
		cons(hd(L), nil));
}



