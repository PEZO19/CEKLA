#include "cekla.h"
// append(L1, L2) = L1 ++ L2 (L1 és L2 összefûzése)}
list append(const list L1, const list L2)  
{
  if (L1 == nil) return L2;
  return cons(hd(L1), 
	      append(tl(L1), L2)); 
}


int main() {
    writeln(append("1234567890", "abcd"));
    writeln(sizeof(list));
}


