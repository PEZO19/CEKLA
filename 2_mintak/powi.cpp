// powi(A, N, P) = P*A^N
int powi(const int A, const int N, const int P) {
  if (N > 0)
    return powi(A, N-1, P*A);
  else
    return P;
}

// powi(A, N) = A^N
int powi(const int A, const int N){
  return powi(A, N, 1);
}
