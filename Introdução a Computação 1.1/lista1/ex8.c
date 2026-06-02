#include <stdio.h>

int main(){

int A,B,C,p;
scanf("%d %d %d", &A, &B, &C);

p = (A+B)==C || (B+C)==A || (C+A)== B || B==C || B==A || A==C ;

p? printf("S\n"):printf("N\n");


return 0;
}
