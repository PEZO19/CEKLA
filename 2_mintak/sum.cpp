#include "cekla.h"
int sum(const list L) {       
    if (L == nil) return 0;    
    else {                    
        const int X = hd(L);   
        const list T = tl(L);  
        return X + sum(T);     
    }
}

int main() {
    const int X = sum(cons(10,cons(20,nil)));
    writeln(X);               
}



