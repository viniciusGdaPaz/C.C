#include<stdio.h>

int main(){

int a, meses,anos;

scanf("%d", &a);

anos = a/365;
a = a%365;
meses = a/30;
a = a%30;


printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses,a);

return 0;

}

