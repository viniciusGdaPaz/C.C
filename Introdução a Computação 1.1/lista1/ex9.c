#include<stdio.h>
#include<math.h>

int maior(int x, int y){
return ((x+y)+ abs(x-y))/2;
}


int main(){
int A, B, C, m;
scanf("%d %d %d", &A, &B, &C);

m = maior(maior(A,B),C);
printf("%d eh o maior\n", m);

return 0;
}
