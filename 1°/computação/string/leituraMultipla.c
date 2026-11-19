#include <stdio.h>
#include <string.h>
#define MAX 50

int detCiclos(char str[MAX], int n){
    int ciclos = 0;
    int i = 0;
    int tamanho = strlen(str);

    while (i < tamanho) {
        if (str[i] == 'W') {
            ciclos++; 
            i++;
        } else {
            int count_r = 0;
            while (i < tamanho && str[i] == 'R' && count_r < n) {
                count_r++;
                i++;
            }
            ciclos++;
        }
    }
    return ciclos;
}



int main(){
    
    char str[MAX];
    int processo;
    
    
   
    
    while(scanf("%s", str) != EOF){
         scanf("%d%*c", &processo);
        printf("%d\n",detCiclos(str,processo));
        
    }
}
