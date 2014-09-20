#include "cekla.h"

// poznegki(L): kiírja L
// >0 és <0 elemeinek a
// számát
int poznegki(list L)   {
  int P = 0, N = 0;
  while (L != nil)
    { int Fej = hd(L);
      P += (Fej > 0);
      N += (Fej < 0);
      L = tl(L);



    }
  write(P); write("-");
  writeln(N);          }

int main() {
  list L = cons(2,cons(-1,cons(0,cons(1,nil))));
  poznegki(L);
}
