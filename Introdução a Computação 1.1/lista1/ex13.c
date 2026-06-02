#include<stdio.h>



int main(){

int seg, min, h;
scanf("%d",&seg);

h = seg / 3600;
seg = seg%3600;
min = seg/60;
seg = seg%60;

printf("%d:%d:%d\n", h,min,seg);







return 0;
}
