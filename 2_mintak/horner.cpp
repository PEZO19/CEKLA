#include "cekla.h"

// csokkent48(L) az L lista elemei 48-cal csökkentve (48 a '0' karakter kódja)
list csokkent(const list L) {
    if (L == nil) return nil;
    return cons(hd(L) - '0', csokkent(tl(L)));
}

// ez egyszerubb:
// list csokkent(const list L) { return map(value_of_digit, L); }

// value_of_digit(C) a C számjegykarakter számértéke
int value_of_digit(const int C) {
    return C - '0';
}

// map(F, [x1, ..., xn]) = [F(x1), ..., F(xn)]
list map(const fun1 F, const list L) {
    if (L == nil) return nil;
    return cons(F(hd(L)), map(F, tl(L)));
}

// Ha leírjuk decimálisan az A számot,
// mögé tesszük a (0..9 értéku) D számjegyet, akkor 
// horner(D, A) az így leírt decimális szám értéke.
int horner(const int Digit, const int Acc) {
    return Acc * 10 + Digit;
}

// hajtogatás balról, Erlang stílusban
// foldl(F, a, [x1,...,xn]) = F(xn, ..., F(x1, a)...)
int foldl(const fun2 F, const int A, const list L) {   
    if (L == nil) return A;
    return foldl(F, F(hd(L), A), tl(L));
}

// string_to_int(S) az S sztring decimális számként értelmezett értéke
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
