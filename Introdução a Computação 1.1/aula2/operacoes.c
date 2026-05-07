#include <stdio.h>
#define G 6.67e-11
#define m2 5.972e24
#define r 6371000

int main(){
 float F, m1;
 printf("entrar com, m1, m1, e r:\n");
 scanf("%f ", &m1);

 F  = G*(m1/r)*(m2/r);

 printf("F = %.2f N \n", F);

 return 0;
}
