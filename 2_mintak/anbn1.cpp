#include "cekla.h"
list append(const list L1, const list L2) {
  if (L1 == nil) return L2;
  return cons(hd(L1), append(tl(L1), L2));
}

// anbn(N): ['a',<-N->,'a','b',<-N->,'b']
list anbn(int N) {				
  list LA = nil, LB = nil;
  while (N-- > 0)
    { LA = cons('a', LA);
      LB = cons('b', LB);
    }
  return append(LA, LB);
}

int main() {
  writeln(anbn(3));
  return 1;
}

