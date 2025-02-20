/*

PROCESSO AVALIATIVO N3 – ESTRUTURA DE DADOS
EQUIPE
NOMES: Ícaro e Gustavo

CONSEGUIU CHEGAR NO RESULTADO?
R:
SE NÃO, POR QUE NÃO CONSEGUIU CHEGAR NO RESULTADO?
R.:
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"


#define TAMANHO 10000

// Prototipo de Função
void geraNumero(int *vet, int op);
void bubbleSort(int *vet);
void imprimirVetor(int *vet);

int main (void){
// Variáveis
    int vet1[TAMANHO];

// Entrada de dados;
    geraNumero(vet1,2);

// printf("Desordenado: \n\n");
// imprimirVetor(vet1);

// Processamentos dos dados

        //bubbleSort(vet1);
        //insertionSort(vet1);
        //selectionSort(vet1);

// Saída de dados
// printf("\n\nOrdenado: \n\n");
//imprimirVetor(vet1);
    return 0;
}

void geraNumero(int *vet, int op) {
    int i, j;
    switch (op) {
        case 1: // Ordenados
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = i + 1;
            }
            break ;
        case 2: //Invertidos
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = TAMANHO-i;
            }
            break;
        case 3: // Aleatórios
            for (i = 0; i < TAMANHO; i++) {
                vet[i] = (int) (rand() % TAMANHO);
            }
            break;
    }
}

void imprimirVetor(int *vet){
    int i;
    for (i=0; i<TAMANHO;i++){
        printf("%i, ",vet[i]);
        if ((i+1)%14 == 0){
            printf("\n");
        }
    }
}