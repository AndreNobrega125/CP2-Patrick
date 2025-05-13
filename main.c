//Integrantes do grupo: André Ayello de Nobrega RM561754, André Gouveia de Lima RM564219 e Mirella Mascarenhas RM562092
#include <stdio.h>
#include <stdlib.h>

void Fatoriais() {
                int N;
                unsigned long long fat[20];
                printf("Digite um número inteiro de 1 a 20:");
                scanf("%d", &N);
                if (N < 1 || N > 20) {
                    printf("Valor inválido!\n");
                    return;
                }
                for (int i = 1; i <= N; i++) {
                    fat[i - 1] = 1;
                    for (int j = 2; j <= i; j++) {
                        fat[i - 1] *= j;
                    }
                    printf("%d! = %llu\n", i, fat[i - 1]);
            } }
int main() {
    char opcao;
    int n;

    printf("Menu:\n");
    printf("1 - Sequência de Fibonacci\n");
    printf("2 - Fatoriais\n"); 
    printf("3 - Verificar Palíndromo.\n");
    printf("4 - Verificar Substring.\n");
    printf("Escolha uma opção (1/2/3/4): ");
    scanf(" %c", &opcao);

    switch (opcao) { 
        case '1': {
            do {
                printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
                if (scanf("%d", &n) != 1) {
                    while (getchar() != '\n');
                    printf("Entrada invalida. Deve ser entre 1 e 50.\n");
                    continue;
                }
                if (n < 1 || n > 50) {
                    printf("Número inválido. ");
                } 
                else {
                    break;
                }
            } while(1);

            int fibonacci[50];
            fibonacci[0] = 0;
            if (n >= 2) fibonacci[1] = 1;
            for (int i = 2; i < n; i++) {
                fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
            }
            printf("Sequencia de Fibonacci com %d termos: \n", n);
            for (int i = 0; i < n; i++) {
                printf(" %d", fibonacci[i]);
            }
            printf("\n");
            break;
        }
        case '2':  
            Fatoriais();
            break;
        
        case '3': {
            // Código para verificar palíndromo aqui
            break;
        }
        case '4': {
            // Código para verificar substring aqui
            break;
        } 
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }
    return 0;
    
} 
