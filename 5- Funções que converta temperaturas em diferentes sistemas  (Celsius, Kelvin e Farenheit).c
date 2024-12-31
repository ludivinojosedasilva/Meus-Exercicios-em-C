/*Faça uma função que converta temperaturas em diferentes sistemas  
(Celsius, Kelvin e Farenheit)
A função recebe uma temperatura;um caractere para indicar 
o sistema usado na temperatura de entrada  ('c' ou 'C' para indicar que a temperatura 
de entrada está em graus Celsius; 'f' ou 'F' para indicar que é em graus Farenheit; 'k' ou 'K' para indicar que é em graus Kelvin);
um caractere  (na mesma convenção usada para o caractere de entrada) para indicar em qual o sistema da temperatura retornada*/

#include<stdio.h>

// Função que converte temperaturas entre Celsius, Fahrenheit e Kelvin
float converte_temperatura(float temperatura, char entrada, char saida) {
    float resultado;

    // Converte a temperatura para Celsius como base intermediária
    if (entrada == 'C' || entrada == 'c') {
        resultado = temperatura;
    } else if (entrada == 'F' || entrada == 'f') {
        resultado = (temperatura - 32) * 5 / 9; // Fahrenheit para Celsius
    } else if (entrada == 'K' || entrada == 'k') {
        resultado = temperatura - 273.15; // Kelvin para Celsius
    } else {
        return -1; // Entrada inválida
    }

    // Converte de Celsius para o sistema de saída
    if (saida == 'C' || saida == 'c') {
        return resultado; // Celsius permanece Celsius
    } else if (saida == 'F' || saida == 'f') {
        return resultado * 9 / 5 + 32; // Celsius para Fahrenheit
    } else if (saida == 'K' || saida == 'k') {
        return resultado + 273.15; // Celsius para Kelvin
    } else {
        return -1; // Saída inválida
    }
}

// Programa principal
int main() {
    float temperatura;
    char entrada, saida;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    printf("Digite o sistema de entrada (C/F/K): ");
    scanf(" %c", &entrada);
    printf("Digite o sistema de saída (C/F/K): ");
    scanf(" %c", &saida);

    float resultado = converte_temperatura(temperatura, entrada, saida);

    if (resultado == -1) {
        printf("Erro: sistema de entrada ou saída inválido.\n");
    } else {
        printf("Temperatura convertida: %.2f\n", resultado);
    }

    return 0;
}
