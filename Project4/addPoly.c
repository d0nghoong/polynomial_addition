#include<stdio.h>
#include "addpoly.h"
polynomial addPoly(polynomial A, polynomial B){
	polynomial C;
	int A_degree = A.degree; int B_degree = B.degree; int A_index = 0; int B_index = 0; int C_index = 0;
	C.degree = MAX(A.degree, B.degree);

	while (A_index <= A.degree && B_index <= B.degree) {
		if (A_degree > B_degree)
		{
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--; B_degree--;
		}
		else{
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}
	}
	return C;
}

void PrintPoly(polynomial A) {
	int i, degree = A.degree;
	for (i = 0; i <= A.degree; i++) {
		printf("%3dx^%d", A.coef[i], degree--);
		if (i < A.degree) printf("+");
	}

}

