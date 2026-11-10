/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

typedef struct{
    char name[MAX];
    int idade;
}DUENDES;


void lerDuendes(DUENDES duendes[MAX], int n){
    int i ;
    for(i= 0 ; i<n; i++){
        scanf("%s%*c", duendes[i].name );
        scanf("%d%*c", &duendes[i].idade );
    }
}

void ler(DUENDES duendes[MAX], int n){
     int i ;
    for(i= 0 ; i<n; i++){
        printf("%s", duendes[i].name );
        printf("%d\n", duendes[i].idade );
    }
}

int comparador( const void *a, const void *b){
    DUENDES *c1 = (DUENDES *)a;
    DUENDES *c2 = (DUENDES *)b;
    
    if(c1->idade != c2->idade){
        return(c2->idade - c1->idade);
    }
    
    if(c1->idade == c2->idade){
        return strcmp(c2->name, c1->name);
    }
}

void ordena(DUENDES v[MAX], int n){
    qsort(v,n,sizeof(DUENDES),comparador);
    
}



int main()
{
    DUENDES v[MAX];
    int n;
     scanf("%d", &n );
     lerDuendes(v,n);
     ordena(v,n);
     ler(v,n);
     
     
   

    return 0;
}
