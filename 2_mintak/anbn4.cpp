#include "cekla.h"
// an(A, N, L) = [A,<-N->,A] és L összefüzése.
list an(const int A, const int N, const list L) {
  if (N == 0) return L;
  else return an(A, N-1, cons(A, L));
}

// anbn(N) = ['a',<-N->,'a','b',<-N->,'b']
list anbn(const int N) {				
  return an('a', N, an('b', N, nil));
}

int main() {
  writeln(anbn(3));
  return 1;
}

