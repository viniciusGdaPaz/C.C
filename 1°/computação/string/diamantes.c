#include <stdio.h>
#include <string.h>
#define MAX 1000

int diamante(char v[MAX]){
    int diamantes = 0;
    int abertos = 0;
    
    for (int i = 0; i < strlen(v); i++) {
        if (v[i] == '<') {
            abertos++; // 
        } 
        else if (v[i] == '>' && abertos > 0) {
            abertos--;   
            diamantes++; 
        }
        
    }
    
    return diamantes;
}


int main(){
    int  n;
    char str[MAX];
    scanf("%d", &n);
    for(int i = 0; i<n;i++){
        scanf("%s%*c", str);
        
        printf("%d\n", diamante(str));
        
    }
}
