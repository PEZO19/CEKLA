#include "cekla.h"
// fib(N) = N. Fibonacci szám}
int fib(const int N) {
  if (N<2) return N;
  return fib(N-1) +
         fib(N-2);
}


