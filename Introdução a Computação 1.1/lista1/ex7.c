#include <stdio.h>

int main(){

int n,qh;
scanf("%d %d", &n, &qh);
double h, salario;
scanf("%lf", &h);

salario = qh*h;

printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, salario );


return 0;
}
