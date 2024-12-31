/*Faça um programa que faça o seguinte. 
Primeiro, ele lê os seguintes dados.

o tamanho de uma série A
os elementos de uma série A
o tamanho de uma série B
os elementos de uma série B.
Depois, o programa cria um array C = A U B, onde U é a operação de união de séries. 
Por fim, seu programa imprime C.*/
#include <stdio.h>
#include <stdlib.h>

// Função para verificar se um elemento já existe no array
int existeNoArray(int *array, int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == elemento) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int tamanhoA, tamanhoB;
    
    // Lê o tamanho da série A
    printf("Digite o tamanho da série A: ");
    scanf("%d", &tamanhoA);
    
    // Lê os elementos da série A
    int *serieA = (int *)malloc(tamanhoA * sizeof(int));
    printf("Digite os elementos da série A: ");
    for (int i = 0; i < tamanhoA; i++) {
        scanf("%d", &serieA[i]);
    }
    
    // Lê o tamanho da série B
    printf("Digite o tamanho da série B: ");
    scanf("%d", &tamanhoB);
    
    // Lê os elementos da série B
    int *serieB = (int *)malloc(tamanhoB * sizeof(int));
    printf("Digite os elementos da série B: ");
    for (int i = 0; i < tamanhoB; i++) {
        scanf("%d", &serieB[i]);
    }
    
    // Cria o array C com o tamanho máximo possível
    int *serieC = (int *)malloc((tamanhoA + tamanhoB) * sizeof(int));
    int tamanhoC = 0;
    
    // Adiciona os elementos da série A no array C
    for (int i = 0; i < tamanhoA; i++) {
        if (!existeNoArray(serieC, tamanhoC, serieA[i])) {
            serieC[tamanhoC++] = serieA[i];
        }
    }
    
    // Adiciona os elementos da série B no array C
    for (int i = 0; i < tamanhoB; i++) {
        if (!existeNoArray(serieC, tamanhoC, serieB[i])) {
            serieC[tamanhoC++] = serieB[i];
        }
    }
    
    // Imprime o array C
    printf("A série C (A U B) é: ");
    for (int i = 0; i < tamanhoC; i++) {
        printf("%d ", serieC[i]);
    }
    printf("\n");
    
    // Libera a memória alocada
    free(serieA);
    free(serieB);
    free(serieC);
    
    return 0;
}
