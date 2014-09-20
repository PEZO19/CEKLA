// [impertaiv megoldás]
// int pow(int A, int N) { 		// pow(A,N) = AN
// 	int P = 1; 					// Legyen P értéke 1! 
// 	while (N > 0) { 			// Amíg N>0 ismételd ezt: 
// 		N = N-1; 				// Csökkentsd N-et 1-gyel! 
// 		P = P*A;  } 				// Szorozd P-t A-val! 
// 	return P; 
// }


// [deklaratív megoldás]
// powd(A,N) = AN 
int powd(const int A, const int N) {
	if (N > 0) // Ha N > 0 
		return A * powd(A,N-1); // akkor AN = A*AN−1 
	else 
		return 1; // egyébként AN = 1 
} 					  

// ispow(A,B) = létezik i, melyre B^i= A.
// Előfeltétel: A > 0, B > 1 
int ispow(int A, int B) {
	if (A == 1) return true;
	if (A%B==0) return ispow(A/B, B);
				return false;
}

// Segédfüggvény: powi(A, N, P) = P*AN
int powi(const int A, const int N, const int P) {
	if (N > 0)
		return powi(A, N-1, P*A);
	else
		return P;
}
