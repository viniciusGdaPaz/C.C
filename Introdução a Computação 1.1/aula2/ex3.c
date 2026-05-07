#include <stdio.h>
#include <math.h>


int main(){
    float c, a, b;
    printf("entrar com dois numeros:\n");
    scanf("%f %f", &a, &b);
    c = (a*a + b*b)/(a - b);
    (c>0)? printf("c = %f\n", sqrt(c))
         : printf("Gerou raiz de numero negativo\n");




    return 0;
}
