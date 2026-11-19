#include<stdio.h>
#include<string.h>
#define MAX 20



void verifica(char v[MAX]){
    
    
       if (strlen(v) >= 4 && v[0] == v[2] && v[1] == v[3]) {
        printf("%s", &v[2]); 
    } else {
        printf("%s", v);     
    }
    
}


int main(){
    
    char str[MAX];
    
    while(scanf("%15s", str) != EOF){
        
        verifica(str);
        printf(" ");
    }
    
}
