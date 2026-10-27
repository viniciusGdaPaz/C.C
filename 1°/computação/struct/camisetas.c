/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 50

typedef struct{
    char nome[MAX];
    char cor[MAX];
    char tam;
}CAMISETA; 

//void lerTurma(CAMISETA *turma, int n);
//void lerTurma(CAMISETA turma[], int n);
void lerTurma(CAMISETA turma[MAX], int n){
    int i;
     for(i=0;i<n;i++){
         scanf("%[^\n]%*c", turma[i].nome);
         scanf("%s%*c", turma[i].cor);
         scanf("%c%*c", &turma[i].tam);
     }
}


void printTurma(CAMISETA turma[MAX], int n){
    int i;
     for(i=0;i<n;i++){
         printf("%s %c %s\n",turma[i].cor,turma[i].tam, turma[i].nome);
        
    }
}

void tokey(char *chave, CAMISETA *aux){
    sprintf(chave, "%s %d %s", aux->cor, 255-aux->tam, aux->nome);
}

int comparador(const void *a, const void *b){
    char chave1[MAX], chave2[MAX];
    tokey(chave1,(CAMISETA *) a); //é necessario para fazer um typercast para a struct CAMISETA
    tokey(chave2,(CAMISETA *) b);
    return strcmp(chave1,chave2);
}

void ordena(CAMISETA v[MAX], int n){
    qsort(v, n, sizeof(CAMISETA), comparador);
}
int main(){
    int aux = 0, nvet;
    CAMISETA vetcam[MAX];
    
    scanf("%d%*c", &nvet);
    while(nvet!=0){
        if(aux!=0)printf("\n");
        lerTurma(vetcam,nvet);
        ordena(vetcam,nvet);
        printTurma(vetcam,nvet);
        scanf("%d%*c", &nvet);
        aux++;
    }
    
    
     

    return 0;
}
