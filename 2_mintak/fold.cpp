#include "cekla.h"
// hajtogatás balról, Erlang stílusban
// foldl(F, a, [x1,...,xn]) = F(xn, ..., F(x1, a)...)
int foldl(const fun2 F, const int A, const list L) 
{   
  if (L == nil) return A;
  else
    return foldl(F, F(hd(L), A), tl(L));
}

// hajtogatás balról, Haskell stílusban
// foldlH(F, a, [x1, ..., xn]) = F(...(F(F(a, x1), x2), ...), xn)
int foldlH(const fun2 F, const int A, const list L) 
{   
  if (L == nil) return A;
  else
    return foldlH(F, F(A, hd(L)), tl(L));
}

// hajtogatás jobbról, Haskell és Erlang  megegyezik
// foldr(F, a, [x1, ..., xn]) = F(x1, F(x2, ..., F(xn,a)...))
int foldr(const fun2 F, const int A, const list L) 
{   
  if (L == nil) return A;
  else
    return F(hd(L), foldr(F, A, tl(L)));
}

// foldl1(F, [x1, ..., xn]) = F(...(F(F(x1, x2), x3), ...), xn)
int foldl1(const fun2 F, const list L) 
{   
  return foldl(F, hd(L), tl(L));
}

// foldr1(F, [x1, ..., xn]) = F(x1, F(x2, ..., F(xn-1,xn)...))
int foldr1(const fun2 F, const list L) 
{   
  if (tl(L) == nil) return hd(L);
  else
    return F(hd(L), foldr1(F, tl(L)));
}

int xmy(const int X, const int Y) { return X-Y; }
int ymx(const int X, const int Y) { return Y-X; }

int main(){
  list L = cons(1,cons(5,cons(3,cons(8,nil))));
  write("Erlang: foldl(xmy, 0, L) =   (8-(3-(5-(1-0)))) = ");
         writeln(foldl(xmy, 0, L));
  write("Haskell: foldlH(xmy, 0, L) = ((((0-1)-5)-3)-8) = ");
         writeln(foldlH(xmy, 0, L));
  write("Erlang: foldl(ymx, 0, L) =   ((((0-1)-5)-3)-8) = ");
         writeln(foldl(ymx, 0, L));
  write("Haskell: foldlH(ymx, 0, L) = (8-(3-(5-(1-0)))) = ");
         writeln(foldlH(ymx, 0, L));
  write("foldr(xmy, 0, L) =           (1-(5-(3-(8-0)))) = ");
  writeln(foldr(xmy, 0, L));
}


