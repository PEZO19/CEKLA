int pow(int A, int N) {
  int P = 1;
  while (N > 0) {
    N = N-1;
    P = P*A;
  }
  return P;
}                                        
