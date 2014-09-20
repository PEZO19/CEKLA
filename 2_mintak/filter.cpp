#include "cekla.h"
// filter(P,L): az L lista lista azon X elemei, melyekre P(X) teljesül
list filter(const fun1 P, const list L) 
{
    if (L == nil) return nil;
    list FTail = filter(P, tl(L));
    if (P(hd(L))) return cons(hd(L), FTail);
    else return FTail;
}

// digit(X): Igaz, ha X egy számjegy kódja
int digit(const int X) {  
  if (X < '0') return 0;               
  if (X > '9') return 0;               
  return 1; 
}

list test()
{
  return filter(digit, "Y=22;X=100;");
}
