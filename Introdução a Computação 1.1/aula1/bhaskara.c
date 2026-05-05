#include <stdio.h>;
#include <math.h>;

int main(){
float a, b, c, delta, x1, x2;
printf("entrar com a, b e c: \n");
scanf("%f %f %f", &a, &b, &c);

(a==0)?   printf("não é equaão do grau")
    :(delta = sqrt(b*b - 4*a*c))>=0?
     printf("x1 = %.2f\n", (-b + delta)/(2*a)),
    printf("x2 = %.2f\n", (-b - delta)/(2*a))
    : printf("não existem reais");





return 0;

}
