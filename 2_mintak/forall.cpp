#include "cekla.h"
// Igaz, ha L minden X elemére teljesül a P(X) predikátum
int for_all(const list L, const fun1 P) 
{
    if (L == nil) return true;            
    else {
      if (P(hd(L)) == 0) return false;   //ellenpélda?
      return for_all(tl(L), P);      //többire is teljesül?}
    }
}

// digit(X): Igaz, ha X egy számjegy kódja
int digit(const int X) {  
  if (X < '0') return false;               
  if (X > '9') return false;               
  return true; 
}

// Igaz, ha L egy szám sztringje
int szamjegyek(const list L) 
{ 
  return for_all(L, digit);
}

