#include "cekla.h"
// hatv(A, H, E) = E * (A ^ H)
int hatv(const int A, const int H, const int E) 
{
  if (H <= 0) return E;   //ciklus vége
  const int E1 = H%2 ? E*A : E;
  return hatv(A * A, H / 2, E1);
}

// hatv(A, H) = A ^ H
int hatv(const int A, const int H)
{  
  return hatv(A, H, 1);
}


