/*Esta biblioteca realiza operações om vetores;
Por padrão os parâmetos das funções com vetores
terão duas variaveis, no minimo, uma que representa o vetor a ser manipulado e a outra que indica a dimensão do vetor
*/
#ifndef _VETOR_H
#define _VETOR_H
#define MAXVET 100

//entrada de valores no vetr
void scanVet_INT(int v[], int tam );

// função para gerar aleatoriamente os elementos dos vetores
void randomVet_INT(int v[], int tam );

//imprimi os elementos do vetores
void printVet_INT(int v[MAXVET], int tam );

// cALCULA A media arimetica dos vetores
int mediaVet(int v[MAXVET], int tam );

 //imprime elemento que é maior do vetor
int maiorVet(int v[MAXVET], int tam );
 
// imprime o menor elemento do vetor
int menorVet(int v[MAXVET], int tam );

// conta a quantidadede elemetos maiores que a meia do vetor
int quant_maior_mediaVet(int v[MAXVET], int tam );

#endif
