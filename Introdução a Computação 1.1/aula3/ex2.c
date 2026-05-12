#include <stdio.h>
#include <math.h>
// pi = m_pi / e = exp(3)
int main(){

float z,  x;
scanf("%f", &x);

z = sqrt(M_PI + sqrt(exp(3) + sqrt(4 + sqrt(x))));

printf("resultado: %f", z);



return 0;
}
