/*Crie um programa que faça a seguinte operação. Primeiro, o programa lê uma palavra de até 10 letras do teclado. 
Depois, o programa imprime a palavra lida utilizando somente letras maiúsculas.
Instruções:
Seu programa não deve escrever na tela uma mensagem solicitando que o usuário digite.
Utilize a função toupper() para tranformar um caracter em maiúsculo.*/

#include <stdio.h>
#include <ctype.h> // Biblioteca necessária para a função toupper

int main() {
    char palavra[11]; // Array para armazenar a palavra de até 10 letras (+1 para o caractere nulo)
    printf("Digite uma palavra: ");
    // Leitura da palavra
    scanf("%10s", palavra);

    // Transformar a palavra em maiúsculas e imprimir
    for (int i = 0; palavra[i] != '\0'; i++) {
        putchar(toupper(palavra[i]));
    }

    putchar('\n'); // Adiciona uma nova linha ao final

    return 0;
}
