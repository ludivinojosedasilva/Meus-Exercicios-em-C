/* Faça uma função em C com seguinte protótipo:

int maiorDe4(int A,int B,int C,int D)

A função recebe 4 números e retorna o maior deles. */

// Arquivo: maior_de_4.c
#include<stdio.h>

// Função que retorna o maior de 4 números
int maiorDe4(int A, int B, int C, int D) {
    int maior = A;
    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;
    return maior;
}

// Programa principal
int main() {
    int A, B, C, D;
    printf("Digite os valores: ");
    scanf("%i%i%i%i", &A, &B, &C, &D);
    printf("O maior valor digitado é: ");
    printf("%i", maiorDe4(A, B, C, D));
    return 0;
}
