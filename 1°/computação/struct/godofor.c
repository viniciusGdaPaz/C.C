/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
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

void ordenaPoder(Candidatos gods[MAX], int aux){
    int maisForte, i;
    for(i=0; i<aux; i++){
        if(gods[i].poder>gods[i+1].poder){
            maisForte= gods[i].poder;
        }else if(gods[i].poder == gods[i+1].poder){
            maisForte = ordenaKills(gods,i);
        }
    }
}

int ordenaKills(Candidatos gods[MAX], int aux){
    int maisForte;
    
        if(gods[aux].kills>gods[aux+1].kills){
            maisForte= gods[aux].kills;
            return maisForte;
            
        }else if(gods[aux].kills == gods[aux+1].kills){
             maisForte = ordenaMortes(gods,i);
             return maisForte;
        }
    
}

int ordenaMortes(Candidatos gods[MAX], int aux){
    int maisForte;
    
        if(gods[aux].mortes>gods[aux+1].mortes){
            maisForte= gods[aux].mortes;
            return maisForte;
            
        }else if(gods[aux].mortes == gods[aux+1].mortes){
             maisForte = ordenaMortes(gods,i);
             return maisForte;
        }
    
}


void printCandidatos(Candidatos gods[MAX], int aux){
    int i;
    for(i=0; i<aux; i++){
        printf("nome:%s \n", gods[i].name);
        printf("poder:%d", gods[i].poder);
        printf("kills:%d", gods[i].kills);
        printf("mortes:%d\n",gods[i].mortes);
    }
}

int main()
{
    int n;
    Candidatos gods[MAX];
    scanf("%d%*c", &n);
    lerCandidatos(gods, n);
    
    
    

    return 0;
}
