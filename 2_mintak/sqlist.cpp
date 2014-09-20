#include "cekla.h"
// sqlist(L) = az L lista elemeinek n�gyzeteit tartalmaz� lista
list sqlist(const list L)  
{
  if (L == nil) return nil ;
  const int HD = hd(L);
  const list TL = tl(L);
  return cons(HD*HD, sqlist(TL));
}




