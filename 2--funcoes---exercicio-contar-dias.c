/*Faça um programa em C que lê um dia, um mês e um ano e mostre os dias transcorridos desde o primeiro dia do ano lido até o dia lido.
Por exemplo, dados dos valores 01, 02 e 2016, o software mostra 32.
Não esqueça de contemplar o caso de ano bissexto (para simplificar, assuma que os anos múltiplos de 4 são bissextos).*/
// Arquivo: dias_transcorridos.c

#include<stdio.h>

// Função que calcula os dias transcorridos
int dias_transcorridos(int d, int m, int a) {
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dias = 0;

    // Verifica se o ano é bissexto
    if (a % 4 == 0) {
        dias_por_mes[1] = 29; // Fevereiro tem 29 dias em ano bissexto
    }

    // Soma os dias dos meses completos
    for (int i = 0; i < m - 1; i++) {
        dias += dias_por_mes[i];
    }

    // Adiciona os dias do mês atual
    dias += d;

    return dias;
}

// Programa principal
int main(){
    int d, m, a;
    printf("Digite dados do ano, no formato: Dia, Mês, Ano:\n");
    scanf("%i%i%i", &d, &m, &a);
    printf("Já passaram %i dias no ano %i.", dias_transcorridos(d, m, a), a);
    return 0;
}
