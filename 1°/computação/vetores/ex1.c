/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void lervet(float v[], int*p){
    int i;
    scanf("%d",p);
    for(i=0;i<*p;i++){
        scanf("%f",&v[i]);
    }
}

float mediaA(float v[], int p){
    int i;
    float soma = 0;
    for(i=0; i<p;i++){
        soma+= v[i];
    }
    soma = soma/p;
    
    return soma;
    
}

void maiorValor(float v[], int p){
    int i = 0;
    float maior = v[i];
    for(i=1;i<p;i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
     printf("maior=%.2f\n",maior);
    
    
}

void menorValor(float v[], int p){
    int i = 0;
    float menor = v[i];
    for(i=1;i<p;i++){
        if(v[i]<menor){
            menor = v[i];
        }
    }
    
    printf("menor=%.2f\n",menor);
}

void acimaMedia(float v[], int p, float m){
    int i;
    int qtd=0;
    for(i=0; i<p;i++){
        if(v[i]>m){
            qtd++;
        }
    }
    
    printf("%d",qtd);
}





int main()
{
    float vetor[4];
    int n;
    lervet(vetor,&n);
    float media = mediaA(vetor,n);
    printf("media = %.2f\n",media);
    maiorValor(vetor,n);
    menorValor(vetor,n);
    acimaMedia(vetor,n,media);
    
   
    

    return 0;
}
