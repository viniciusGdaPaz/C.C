#include <stdio.h>

int calc(int a){
int  d2, d1, d0;

d0 = a%10;
a = a/10;
d1 = a%10;
a = a/10;
d2 = a%10;
return (d2+d1+d0);

}

int main(){
int num,z;
scanf("%d", &num);

z = calc(num);

printf("> soma de %d = %d", num , z);
}
