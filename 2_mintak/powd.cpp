// powd(A,N) = A ^ N
int powd(const int A, const int N) {
  if (N > 0)                   
    return A * powd(A,N-1);    
  else
    return 1;                  
}




