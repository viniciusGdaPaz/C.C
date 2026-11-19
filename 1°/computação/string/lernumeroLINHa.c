#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 500

void lerLinha(char v[MAX]){
    char letras[MAX];
    char num1[4],num2[4],num3[4];
    int num = 0;
    
     scanf(" %[a-zA-Z]", letras) ;
     scanf(" %[0-9]", num1) ;
     scanf(" %[a-zA-Z]", letras) ;
     scanf(" %[0-9]", num2) ;
     scanf(" %[a-zA-Z]", letras) ;
     scanf(" %[0-9]%*c", num3) ;
     
     num = atoi(num1)+atoi(num2)+atoi(num3);
     printf("%d\n",num);
}


int main() {
    char str[MAX];
    int n;
    
    scanf(" %d%*c",&n);
   for(int i =0; i<n;i++){
       lerLinha(str);
   }
    
    
    return 0;
}
