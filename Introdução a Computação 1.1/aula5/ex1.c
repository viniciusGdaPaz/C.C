#include <stdio.h>

int leap(int ano){
 return ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0) ;}

 int days(int m, int a){
    int t31, t30, t02;
    t31 = m == 1|| m==3 || m==5 || m==7 ||m==8||m==10||m==12;

    t30 = m==4||m==6||m==9||m==11;

    t02 = m==2;

    return t31?31:t30?30:t02?28+leap(a):0;
 }

 int main(){
 printf("%d\n", days(2, 2000));
 }

