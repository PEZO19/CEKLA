#include "cekla.h"


list revapp(list L, list L2) {
    if (L == nil) return L2;
    return revapp(tl(L), cons(hd(L), L2));
}

int plus(int A, int B) {
    return A+B;
}

int sum(list L, int L2) {
    if (L == nil) return L2;
    return sum(tl(L), plus(hd(L), L2));
}

int sum(list L) {
    return sum(L, 0);
}

template <class Fun, class AccType>
AccType foldlt(Fun F, AccType Acc, list L) {
    if (L == nil) return Acc;
    return foldlt(F, F(hd(L), Acc), tl(L));
}

int main() {
    writeln(l(10,20,30));                  // [10,20,30]
    writeln(sum(l(10,20,30)));             // 60
    writeln(foldlt(plus, 0, l(10,20,30))); // 60
    const list L = "abc", L2 = "123";
    writeln(foldlt(cons, L2, L));          // abc123
    writeln(revapp(L, L2));                // abc123
}
