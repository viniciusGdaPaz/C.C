#include <stdio.h>

int calc( int a,  int op, int b){
return
(op =='+')?a+b:
(op =='-')?a-b:
(op =='*')?a*b:
(op =='%')?a%b:
(op =='/')?(b?a/b:9999999):0;
}


int main(){
int x, y, z, op = 0;
scanf("%d %c %d", &x, &op, &y);
z = calc(x, op, y);
printf("> %d %c %d = %d\n", x, op, y, z);
}
