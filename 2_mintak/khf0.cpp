
#include "cekla.h"

// Foliarol atveve:
// append(L1, L2) = L1 ++ L2 (L1 és L2 összefûzése)}
list append(const list L1, const list L2)  
{
  if (L1 == nil) return L2;
  return cons(hd(L1), 
	      append(tl(L1), L2)); 
}


int atrendezett(const int S, const int A){
	list Atvaltott = atvalto_listaba(S,A);
	list Rendezett = listat_listaba_rendez(Atvaltott);
	return listabol_szam(Rendezett, A);
}

// Segedfv. 
list atvalto_listaba(const int S, const int A, list Acc){
	if( (S/A)==0 ){return cons(S%A,Acc);}
	return atvalto_listaba(S/A,A,cons(S%A,Acc));
}

// S szam A alapu szamrendszerben felirt, helyiértékekből képzett lista.
list atvalto_listaba(const int S, const int A){
	return atvalto_listaba(S, A, nil);
}

// Az L listát balról jobbra összeolvasott A alapú számrendszerbeli szám értéke 10-es számrendszerben.
int listabol_szam(list L, int A){
	return listabol_szam(L,A,0);
}

// Segédfv.
int listabol_szam(list L, int A, int Acc){
	if ( L == nil ) return Acc;
					return listabol_szam(tl(L), A, A*Acc + hd(L));
}

list listat_listaba_rendez(list Inlist, const int Szamjegysorszam, list Paratlan_list, list Paros_list){
	//osszefuzzuk a kettot
	if ( Inlist == nil ) return append(Paratlan_list, Paros_list);
	//felepitjuk a paros listat
	if ( (Szamjegysorszam % 2) == 0 ) return listat_listaba_rendez(tl(Inlist),Szamjegysorszam+1,Paratlan_list,append(Paros_list,l(hd(Inlist))));
	//felepítjuk a paratlan listat
	if ( (Szamjegysorszam % 2) == 1 ) return listat_listaba_rendez(tl(Inlist),Szamjegysorszam+1,append(Paratlan_list,l(hd(Inlist))),Paros_list);
	
}

// A paraméterként megadott lista átrendezve, ahol az először az összes páratlanadik (1.,3.,5. ...) majd az összes párosadik (2.,4.,6. ...) helyen lévő elem szerepel egymás után.
list listat_listaba_rendez(list Inlist){
	return listat_listaba_rendez(Inlist, 1, nil, nil);
}























// =========== tovabbi korabbi probalkozasok ====================================


// powd(A,N) = A ^ N
int powd(const int A, const int N) {
  if (N > 0)                   
    return A * powd(A,N-1);    
  else
    return 1;                  
}

// S szamot 10-es szamrendszerből A alapu szamrendszerbe valtja. (De a console tovabbra is 10-es alapon abrazol)
// Feltesszuk, hogy az A>=2
int atvalto(const int S, const int A, const int Acc, const int H){
	if( (S/A)==0 ){	return (S%A)*powd(10,H) + Acc;}
					return atvalto(S/A,A, (S%A)*powd(10,H) + Acc, H+1);

}

int atvalto(const int S, const int A){
	return atvalto(S,A,0,0);
}

// number_to_list
// 10-es alapu szamrendszerben ABRAZOLT szamot tesz at listaba (karakterek egymásutánjaként)
list number_to_list(const int S, list AccL){
	if( (S/10)==0 ){ return 			  		 append( l(S%10) ,AccL);}
					 return number_to_list(S/10, append( l(S%10) ,AccL));
}

list number_to_list(const int S){
	return number_to_list(S, nil);
}

