#include "cekla.h"
// fact(N, I) = N! * I
int facti(const int N, const int I) {
  if (N==0) return I;
  return facti(N-1, I*N);
}

// fact(N) = N!
int facti(const int N) {
  return facti(N, 1); 
}
