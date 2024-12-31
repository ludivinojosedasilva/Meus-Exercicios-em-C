/*Faça um programa que faça o seguinte. Primeiro, ele lê os seguintes dados.

o tamanho de uma série A
os elementos de uma série A
o tamanho de uma série B
os elementos de uma série B.
Depois, o programa cria um array C = A ∩ B, onde ∩ é a operação de intersecção sobre conjuntos. Por fim, seu programa imprime C.

Note que não pode haver valores repetidos em C.*/

#include <stdio.h>

int main() {
    int nA, nB;

    // Leitura do tamanho da série A
    printf("Digite o tamanho da serie A: ");
    scanf("%d", &nA);
    
    int A[nA];
    printf("Digite os elementos da serie A:\n");
    for (int i = 0; i < nA; i++) {
        scanf("%d", &A[i]);
    }

    // Leitura do tamanho da série B
    printf("Digite o tamanho da serie B: ");
    scanf("%d", &nB);
    
    int B[nB];
    printf("Digite os elementos da serie B:\n");
    for (int i = 0; i < nB; i++) {
        scanf("%d", &B[i]);
    }

    // Criando o array C para armazenar a interseção
    int C[nA > nB ? nA : nB]; // O tamanho de C não pode ser maior que o maior tamanho entre A e B
    int k = 0; // Variável para controlar o índice de C

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < nB; j++) {
            if (A[i] == B[j]) {
                // Verifica se o elemento já existe em C
                int exists = 0;
                for (int m = 0; m < k; m++) {
                    if (C[m] == A[i]) {
                        exists = 1;
                        break;
                    }
                }
                // Se o elemento não existe, adiciona em C
                if (!exists) {
                    C[k++] = A[i];
                }
            }
        }
    }

    // Impressão do array C
    printf("A interseccao entre A e B e: ");
    if (k > 0) {
        for (int i = 0; i < k; i++) {
            printf("%d ", C[i]);
        }
    } else {
        printf("Nao ha interseccao entre os conjuntos.");
    }
    printf("\n");

    return 0;
}

