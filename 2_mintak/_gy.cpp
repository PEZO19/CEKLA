
// 3. feladat
int lnko(const int A, const int B, const int B1){
	if(A > B1)
		return lnko(A,B,B1);
	else
		return lnko(A,B,A1);
}

int lnko_v2(const int A,const int B,const int Oszto){
	if (A % Oszto == 0)
		if(B % Oszto == 0)
			return Oszto;
	return lnko (A,B,Oszto-1);
}

// 4 feladat
int lnko2(const int A, const int B){
	if(B == 0) return A;
	return lnko2(B, A%B);
}

/* 5* feladat 
	Lista hossza - jobbrekurziv */

// Segedfv. - 'egyfajt inicializalo szerepet jatszik, megfelelo "formara" hozza a parameterlistat'.
int length(list L, const int DB){
	if (L == nil) return DB;
	else return length(tl(L),DB+1);

}

int length(list L){
	return length(L, 0);
}

/* 6. feladat
	Szamlista minden elemenek novelese */

list lista_noveltje(const list L){
	if (L == nil) return nil;
	else return cons(hd(L)+1, lista_novelje(tl(L)));
}

/* 8. feladat 
	Beszuras listaba adott helyre	*/

list insert_nth(const list L,const int N,const int E){
	if(N == 0) return cons(E, L);
	else return cons(hd(L), insert_nth(tl(L), N-1, E));
}

/* 10. feladat 
	Lista adott hosszusagu prefixuma */

list take(list L, int H){

}


/* 14. feladat */
int inc(const int I){
	return I+1;
}

list map(fun1 f, list L){
	//TODO
	if(L==nil) return L;
	else return cons(f());
}

/* 15. feladat */
int add(const int A, const int B){
	return A + B;
}

int foldl(fun2 f, const int Acc, const list L){
	if(L == nil) return Acc;
	else return foldl(f, f(Acc, hd(L)), tl(L));
}

int sum(list L){
	return foldl(add, 0, L);
}




