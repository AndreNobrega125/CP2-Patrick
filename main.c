//Integrantes do grupo: André Ayello de Nobrega RM561754, André Gouveia de Lima RM564219 e Mirella Mascarenhas RM562092
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//case 2:
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

//------------------------------------------------------------
//case 3 (introdução):
#define MAX_TAM 100 
void verificarPalindromo() {
    char palavra[MAX_TAM];
    int i, tamanho, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (tolower(palavra[i]) != tolower(palavra[tamanho - 1 - i])) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo)
        printf("A palavra é um palíndromo.\n");
    else
        printf("A palavra NÃO é um palíndromo.\n");
}
//------------------------------------------------------------

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
        
        case '3': 
          verificarPalindromo();
            break;
        
        case '4': {
           char str1[100], str2[100];
          printf("Digite a primeira string: ");
          fgets(str1,100, stdin);
          str1[strcspn(str1, "\n")] = '\0'; // Remover a nova linha
          
          printf("Digite a segunda string:");
          fgets(str2, 100, stdin);
          str2[strcspn(str2, "\n")] = '\0';

          if (strstr(str1, str2) != NULL) {
            printf("A segunda string está contida na primeira. \n");
          } else {
            printf("A segunda string não está contida na primeira. \n");
          }
            break;
        } 
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }
    return 0;
    
} 
