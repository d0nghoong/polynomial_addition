#include<stdio.h>
#include "addpoly.h"
void main()
{
	polynomial C;
	polynomial A = { 3,{4,3,5,0} };
	polynomial B = { 4,{3,1,0,2,1} };
	C = addPoly(A, B);

	printf("A(x)= "); PrintPoly(A);
	printf("\nB(x)= "); PrintPoly(B);
	printf("\nC(x)= "); PrintPoly(C);
}
