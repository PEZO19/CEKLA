#include "cekla.h"
// anbn(N): Eredménye ['a',<-N->,'a','b',<-N->,'b']
list anbn(int N)      {				
  list L = nil;
  int M = N;
  while (N-- > 0)
    L = cons('b', L);
  while (M-- > 0)
    L = cons('a', L);
  return L;           }

int main() {
  writeln(anbn(3));
  return 1;
}

