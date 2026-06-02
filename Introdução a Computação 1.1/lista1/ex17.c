#include<stdio.h>


int comp(int x, int y){
int r = 0;
r = (x == y)? 1 : 0;

return r;
}


int main(){

int x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;
scanf("%d %d %d %d %d %d %d %d %d %d",&x1,&x2, &x3,&x4,&x5,&y1, &y2,&y3, &y4, &y5);

(comp(x1,y1)== 1 || comp(x2,y2)== 1 || comp(x3,y3)== 1|| comp(x4,y4)== 1 || comp(x5,y5)== 1 )? printf("N\n"): printf("Y\n");

return 0;
}
