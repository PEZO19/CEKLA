#include "cekla.h"
list append(const list L1, const list L2) {
  if (L1 == nil) return L2;
  return cons(hd(L1), append(tl(L1), L2));
}

// an(A, N) = [A,<-N->,A]
list an(const int A, const int N) {
  if (N == 0) return nil;
  else return cons(A, an(A, N-1));
}

// anbn(N) = [a,<-N->,a,b,<-N->,b]
list anbn(const int N) {				
  return append(an('a',N), an('b',N));
}

int main() {
  writeln(anbn(3));
  return 1;
}

