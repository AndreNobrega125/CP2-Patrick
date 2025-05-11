//Integrantes do grupo: André Ayello de Nobrega RM561754, André Gouveia de Lima RM564219 e Mirella Mascarenhas RM562092
#include <stdio.h>
#include <stdlib.h>

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
         //Verificar se a entrada é um número
        if (scanf("%d", &n) != 1){
           //Limpa o buffer de entrada se o usuário digitou algo não numérico
         while (getchar() != '\n');
         printf("Numero invalido. Deve ser entre 1 e 50.\n");
            if (n < 1 || n > 50) {
             
            }
            // Código da sequência de Fibonacci aqui
            break;
        }
        case '2': {
            // Código para calcular fatoriais aqui
            break;
        }
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
