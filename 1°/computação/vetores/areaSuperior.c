#include<stdio.h>
#define MAX 12

void lerMatriz(double v[][MAX]){
    int i, j;
    for( i = 0; i<MAX; i++){
        
        for(j=0; j<MAX; j++){
            scanf("%lf", &v[i][j]);
        }
    }
}


void Media(double v[][MAX]){
    double media=0, qtd=0;
    for( int i = 0; i<5; i++){
        
        for(int j=i+1; j<MAX-1-i; j++){
           media+=v[i][j];
           qtd++;
        }
    }
    
    media = media/qtd;
    printf("%.1lf\n",media);
}

void Soma(double v[][MAX]){
    double soma=0;
    for( int i = 0; i<5; i++){
        
        for(int j=i+1; j<MAX-1-i; j++){
           soma+=v[i][j];
           
        }
    }
    
    
    printf("%.1lf\n",soma);
}

    


int main(){
    
    double v[MAX][MAX];
    char op;
    
    scanf(" %c",&op);
    lerMatriz(v);
    
    if(op =='S'){
        Soma(v);
    }else if(op == 'M'){
        Media(v);
    }
    
    
    
    
    
    
    return 0;
}
