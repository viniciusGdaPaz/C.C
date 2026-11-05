/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAX 100

typedef struct{
    char name[MAX];
    int poder;
    int mortes;
    int kills;
    
}Candidatos;

void lerCandidatos(Candidatos gods[MAX], int aux){
    int i ;
    for(i=0; i<aux; i++){
        scanf("%s%*c", gods[i].name);
        scanf("%d", &gods[i].poder);
        scanf("%d", &gods[i].kills);
        scanf("%d%*c", &gods[i].mortes);
        
    }
    
}


void tokey(char *chave, Candidatos *aux){
    sprintf(chave,"%d %d %d %s", 100-aux->poder, 100-aux->kills, aux->mortes, aux->name);
}

int comparador(const void *a, const void *b){
    Candidatos *c1 = (Candidatos *)a;
    Candidatos *c2 = (Candidatos *)b;

    
    if (c1->poder != c2->poder) {
        return c2->poder - c1->poder;
    }
    
    if (c1->kills != c2->kills) {
        return c2->kills - c1->kills;
    }

    if (c1->mortes != c2->mortes) {
        return c1->mortes - c2->mortes;
    }
   
    return strcmp(c1->name, c2->name);
}

void ordena(Candidatos v[MAX], int n){
    qsort(v, n, sizeof(Candidatos), comparador);
}




void printCandidatos(Candidatos gods[MAX], int aux){
    int i= 0;
   
        printf("%s\n", gods[i].name);
      
    


}


int main()
{
    int n;
    Candidatos gods[MAX];
    scanf("%d%*c", &n);
    lerCandidatos(gods, n);
    ordena(gods,n),
    printCandidatos(gods,n);
   
    
    
    

    return 0;
}
