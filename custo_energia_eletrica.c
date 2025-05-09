/*Esse programa calcula o custo de energia elétrica para operar um aparelho com determinada potência (em kW) durante um período de um mês.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}


int diasNoMes(int mes, int ano) {
    if (mes < 1 || mes > 12) return -1;
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && ehBissexto(ano))
        return 29;
    
    return diasPorMes[mes - 1];
}

int main() {
    char data[8]; 
    int mes, ano;
    float potencia, horas, custo;
    const float tarifa = 0.81;

    
    printf("Digite o mês e o ano de referência (mm/aaaa): ");
    scanf("%7s", data);


    if (strlen(data) != 7 || data[2] != '/') {
        printf("Formato inválido. Use mm/aaaa.\n");
        return 1;
    }

    mes = atoi(&data[0]);
    ano = atoi(&data[3]);

    if (mes < 1 || mes > 12) {
        printf("Mês inválido. Digite um valor entre 1 e 12.\n");
        return 1;
    }

    int dias = diasNoMes(mes, ano);
    if (dias == -1) {
        printf("Erro ao determinar dias do mês.\n");
        return 1;
    }

 
    printf("Digite a potência do aparelho em kW: ");
    scanf("%f", &potencia);

    
    printf("Digite o tempo de uso diário do aparelho em horas: ");
    scanf("%f", &horas);

   
    custo = potencia * horas * dias * tarifa;

    
    printf("\n\tO custo para ligar um aparelho de %.0f Watts por %.0f horas por dia no mês de referência %s é: R$ %.2f\n",
           potencia * 1000, horas, data, custo);

    return 0;
}
