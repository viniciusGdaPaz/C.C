#include <stdio.h>
#define MAX 5


void printVetorPar(int v[MAX], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("par[%d] = %d\n", i, v[i]);
         
    }
} 

void printVetorImpar(int v[MAX], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("impar[%d] = %d\n", i, v[i]);
       
    }
}


void lerVetor(int par[MAX], int impar[MAX]){
    int i,t , cpar = 0, cimpar = 0;
    for(i = 0; i < 15; i++){
        
        scanf("%d", &t);
        
        if(t % 2 == 0){
            par[cpar] = t;
            cpar++;
        }else{
             impar[cimpar] = t;
            cimpar++;
        }
        
        if(cimpar == 5){
            
            printVetorImpar(impar,cimpar);
            cimpar = 0;
            
        } else if(cpar == 5) {
            
            printVetorPar(par,cpar);
            cpar = 0;
        }
    }
    
    printVetorImpar(impar,cimpar);
    printVetorPar(par, cpar);
    
}



int main(){
    int par[MAX];
    int impar[MAX];
    
    
    
    lerVetor(par,impar);
    
    
    return 0;
}
