#ifndef ADDPOLY_H
#define ADDPOLY_H
#	define MAX_Number 50
#	define MAX(a,b) ((a>b)?a:b)

typedef struct {
	int degree;
	int coef[MAX_Number];
}polynomial;

polynomial addPoly(polynomial A, polynomial B);
void PrintPoly(polynomial C);
#endif
