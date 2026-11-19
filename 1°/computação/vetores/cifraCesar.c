#include <stdio.h>
#include <string.h>
#define MAX 50

void Decifrar(char str[MAX], int nc){
    char letra;
    for(int i = 0; i<strlen(str); i++){
        letra = str[i];
        letra = letra - nc;
        if(letra < 'A'){
            letra = letra +26;
        }
        
        str[i]=letra;
    }
    
}



int main(){
    
    char str[MAX];
    int nt, nc;
    
    scanf("%d",&nt);
    
    for(int i=0; i<nt; i++){
        
        scanf("%s", str);
        scanf("%d%*c",&nc);
        Decifrar(str,nc);
        printf("%s\n", str);
    }
    
}
