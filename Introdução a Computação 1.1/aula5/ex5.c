#include <stdio.h>

int calc(int a){
int  d2, d1, d0,c;

d0 = a%10;
a = a/10;

d1 = a%10;
a = a/10;
d2 = a%10;
c = (d0-1 + (d1-1)*10 +((d2-1)*100)) ;

return (c);

}

int main(){
int num,z;
scanf("%d", &num);

z = calc(num);

printf("> soma de %d = %d", num , z);
}
