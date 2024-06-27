#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char **a, char **b){
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char *nome[], int tamanho){
    int i, j;

    for (i = 0; i < tamanho - 1; i++){
        for (j = 0; j < tamanho-i-1; j++){
            if(strcmp(nome[j], nome[j+1]) > 0){
                swap(&nome[j], &nome[j+1]);
            }
        }
    }
}

int main(){
    char *nomes[5]; // Array de 5 nomes
    int i;

    for(i = 0; i < 5; i++){
        nomes[i] = (char *)malloc(30 * sizeof(char));
        if(nomes[i] == NULL) return 1;
        printf("Insira o %d nome simples: ", i+1);
        scanf("%s", nomes[i]);
    }

    bubbleSort(nomes, 5);

    printf("Novo array ordenado: ");
    for(i = 0; i < 5; i++){
        printf("%s ", nomes[i]);
        free(nomes[i]);
    }

    return 0;
}