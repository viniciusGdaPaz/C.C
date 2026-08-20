#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include "vetor.h"

//função que o usuario fara a entrada dos elemenentos do vaor
void scanVet_INT(int v[0], int tam){
    int i;


for(i=0; i<tam; i++){
    scanf("%d", &v[i]);
    }
}

//função para  a impressão dos elementos do vetor
void printVet_INT(int v[MAXVET], int tam){
    int i;

    for(i=0; i<tam;i++){
        printf("%d\n", v[i]);
    }
}

//função que serão gerados aleatoriamente os elementos do vetor
void randomVet_INT(int v[MAXVET], int tam){
    int i;
    //inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    for(i=0;i<tam;i++){
        //escolhe um numero aleatorio entre 0 e 1000
        v[i]=rand()%1000;
    }
    
}

//função que calcula a média dos valores dentro do vetor
int mediaVet(int v[MAXVET], int tam){
    int i;
    int media = 0;
    
    for(i=0; i<tam; i++){
        media  = media + v[i];
        
        
    }
        media  = media/tam;
        return media;
}


//função que retorna o mair numeor do vetor
int maiorVet(int v[MAXVET], int tam ){
    int i;
    int maior = 0;
    
     for(i=0; i<tam; i++){
        if(v[i]>maior){
            maior = v[i];
        }
    }
    
    return maior;
}

//função que retorna o menor numero do vetor
int menorVet(int v[MAXVET], int tam ){
    int i;
    int menor = 0;
    
     for(i=0; i<tam; i++){
        if(i!=0 && v[i]<menor){
            menor = v[i];
        }else {
            menor = v[i];
        }
    }
    
    return menor;
}

// função que retorna a quantidade de elementos maiores que a média
int quant_maior_mediaVet(int v[MAXVET], int tam ){
    int i;
    int media = mediaVet(v,tam);
    int qtd = 0;
    
     for(i=0; i<tam; i++){
        if(v[i]>media){
            qtd++;
        }
     }
    
    return qtd;
}

