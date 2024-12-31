/* Faça um programa que leia o tamanho de uma série de inteiro e os elementos desta. 
Em seguida, seu programa deve imprimir os números que se repetem na série. 
Por exemplo, dada a série [1,2,3,1,5,6,7,2,1,5], o programa imprime "1 2 5". 
Se nenhum número se repete, então imprima o menor número negativo inteiro.*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, j, repetido;
    printf("Digite o tamanho da série: ");
    scanf("%d", &n);

    int serie[n];
    printf("Digite os elementos da série: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &serie[i]);
    }

    int repeticoes[n]; // Array para armazenar os números repetidos
    int k = 0; // Índice para repeticoes

    for (i = 0; i < n; i++) {
        repetido = 0;
        for (j = 0; j < i; j++) {
            if (serie[i] == serie[j]) {
                repetido = 1;
                break;
            }
        }
        if (repetido) {
            int ja_contado = 0;
            for (j = 0; j < k; j++) {
                if (repeticoes[j] == serie[i]) {
                    ja_contado = 1;
                    break;
                }
            }
            if (!ja_contado) {
                repeticoes[k++] = serie[i];
            }
        }
    }

    if (k > 0) {
        printf("Números que se repetem na série: ");
        for (i = 0; i < k; i++) {
            printf("%d ", repeticoes[i]);
        }
        printf("\n");
    } else {
        printf("%d\n", INT_MIN);
    }

    return 0;
}
