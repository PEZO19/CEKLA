#include "cekla.h"

// csokkent48(L) az L lista elemei 48-cal cs�kkentve (48 a '0' karakter k�dja)
list csokkent(const list L) {
    if (L == nil) return nil;
    return cons(hd(L) - '0', csokkent(tl(L)));
}

// ez egyszerubb:
// list csokkent(const list L) { return map(value_of_digit, L); }

// value_of_digit(C) a C sz�mjegykarakter sz�m�rt�ke
int value_of_digit(const int C) {
    return C - '0';
}

// map(F, [x1, ..., xn]) = [F(x1), ..., F(xn)]
list map(const fun1 F, const list L) {
    if (L == nil) return nil;
    return cons(F(hd(L)), map(F, tl(L)));
}

// Ha le�rjuk decim�lisan az A sz�mot,
// m�g� tessz�k a (0..9 �rt�ku) D sz�mjegyet, akkor 
// horner(D, A) az �gy le�rt decim�lis sz�m �rt�ke.
int horner(const int Digit, const int Acc) {
    return Acc * 10 + Digit;
}

// hajtogat�s balr�l, Erlang st�lusban
// foldl(F, a, [x1,...,xn]) = F(xn, ..., F(x1, a)...)
int foldl(const fun2 F, const int A, const list L) {   
    if (L == nil) return A;
    return foldl(F, F(hd(L), A), tl(L));
}

// string_to_int(S) az S sztring decim�lis sz�mk�nt �rtelmezett �rt�ke
int string_to_int(const list S) {
    return foldl(horner, 0, (map(value_of_digit, S)));
}

int main(){
    writeln(string_to_int("123"));
    writeln(string_to_int("0123"));
    writeln(string_to_int("01"));
    writeln(string_to_int("1"));
    writeln(string_to_int("0"));
    writeln(string_to_int("00"));
    writeln(string_to_int("100"));
}
