/* Sua tarefa é implementar uma função organiza números em ordem crescente. 
Mais precisamente, sua função recebe como entrada um array de inteiros e a quantidade de números neste array. 
Em seguida, sua função troca os valores do array de posição de modo que eles ascendem em ordem crescente.
Por exemplo, suponha que sua função recebeu um array contendo os números [ 4, 7, 0 ,10, -3 ]. 
Então, ela deve trocar os valores de posição de modo que o array seja [ -3, 0, 4, 7, 10].*/

// Arquivo: ordena_array.c
#include<stdio.h>

// Função que ordena um array em ordem crescente
void ordena_array(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Programa principal para testar a função
int main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int array[n];
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    ordena_array(array, n);

    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
