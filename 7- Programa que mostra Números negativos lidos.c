/*Faça um programa que leia o tamanho de uma série de inteiros e os elementos desta série. 
Seu programa deve imprimir os números negativos desta série.*/

#include<stdio.h>

// Programa principal para imprimir números negativos de uma série
int main() {
    int n;

    printf("Digite o tamanho da série: ");
    scanf("%d", &n);

    int serie[n];

    printf("Digite os elementos da série: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &serie[i]);
    }

    printf("Números negativos da série: ");
    for (int i = 0; i < n; i++) {
        if (serie[i] < 0) {
            printf("%d ", serie[i]);
        }
    }

    printf("\n");
    return 0;
}
