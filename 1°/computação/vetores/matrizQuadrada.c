#include<stdio.h>


void gerarMatriz(int n, int v[][n]){
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                int cima = i;
                int esquerda = j;
                int baixo = n - 1 - i;
                int direita = n - 1 - j;

                int menor = cima;
                if (esquerda < menor){
                        menor = esquerda;
                } 
                if (baixo < menor){
                        menor = baixo;
                } 
                if (direita < menor){
                        menor = direita;
                }
                        
                v[i][j] = menor + 1;
            }
   }
}

void printarMatriz(int n, int v[][n]){
    for (int i = 0; i < n; i++) {
        
            for (int j = 0; j < n; j++) {
                
                if (j == 0) {
                    printf("%3d", v[i][j]);    
                } else {
                    printf(" %3d", v[i][j]);    
                }
            }
            
        printf("\n"); 
    }
    printf("\n"); 
}


int main(){
    
    int n;
    scanf("%d",&n);
    while(n != 0){
        int v[n][n];
        gerarMatriz(n,v);
        printarMatriz(n,v);
        scanf("%d",&n);
    }
    
    return 0;
    
    
}
