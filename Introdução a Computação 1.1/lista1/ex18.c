#include<stdio.h>

int main(){

int a, b, c,r;
scanf("%d %d %d", &a, &b, &c);

r = (a+b+c);
r = r<0 ? r+24: (r>24)? r-24:r;

printf("%d", r);

return 0;
}
