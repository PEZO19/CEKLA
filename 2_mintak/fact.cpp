#include "cekla.h"
// fact(N) = N!
int fact(const int N) {
  if (N==0) return 1;
  return N * fact(N-1);
}

