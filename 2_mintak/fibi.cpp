#include "cekla.h"
int fibi(const int N,    
	 const int Prev, const int Cur)
{
  if (N==0) return 0;
  if (N==1) return Cur;
  return fibi(N-1, Cur, Prev + Cur);
}

int fibi(const int N) 
{
  return fibi(N, 0, 1); 
}
