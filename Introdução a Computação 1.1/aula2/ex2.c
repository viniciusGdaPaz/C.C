#include <stdio.h>


int main(){
	float x,  z, t;
	printf("entrar com x:\n");
	scanf("%f ", &x);
	t = x - 2;
	z = (1 + x*x - t*t*t)/(x - 1.0/8.0);


	printf("z = %f \n", z);

 return 0;
}
