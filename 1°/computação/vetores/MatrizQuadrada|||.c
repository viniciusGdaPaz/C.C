#include<stdio.h>
#include<math.h>
#include<string.h>


void gerarMatriz(int n, int v[][n]){
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                        
                v[i][j] = pow(2, i+j);
            }
   }
}

void printarMatriz(int n, int v[][n]){
    int maior = v[n - 1][n - 1];
    char buffer[30];
    sprintf(buffer, "%d", maior);
    int largura = strlen(buffer);
    
    for (int i = 0; i < n; i++) {
        
            for (int j = 0; j < n; j++) {
                
                if (j == 0) {
                    printf("%*d",largura, v[i][j]);    
                } else {
                    printf(" %*d",largura, v[i][j]);    
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
