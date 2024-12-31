/*Programe a função troca de modo que ela troque os valores entre duas variáveis a e b. 
Por exemplo, se a=10 e b=5, então após executar a função troca a=5 e b=10.*/
#include<stdio.h>

// Função que troca os valores entre duas variáveis
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Programa principal para testar a função troca
int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes da troca: a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("Depois da troca: a = %d, b = %d\n", a, b);

    return 0;
}
