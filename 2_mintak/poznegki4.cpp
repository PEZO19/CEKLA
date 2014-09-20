#include "cekla.h"

// pozneg(L, P0, N0) = [P,N], ahol P-P0, ill.
// N-N0 az L >0, ill. <0 elemeinek a száma
list pozneg(list L, int P0, int N0) {
  if (L == nil) return cons(P0,cons(N0,nil));
  const int Fej = hd(L);
  const int P = P0+(Fej>0);
  const int N = N0+(Fej<0);
  return pozneg(tl(L), P, N);
}

// ponznegki(L): kiírja L >0 és <0 elemeinek számát
int poznegki(const list L) {
  const list PN = pozneg(L, 0, 0);
  const int P = hd(PN), N = hd(tl(PN));
  write(P); write("-");
  writeln(N);
}

int main() {
  const list L = cons(2,cons(-1,cons(0,cons(1,nil))));
  return poznegki(L);
}
