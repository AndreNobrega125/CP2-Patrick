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
         //Loop para garabtur entrada válida
         printf("Digite a quantidade de termos da sequencia de Fibonacci (1 a 50): ");
        //Verificar se a entrada é um número
        if (scanf("%d", &n) != 1){
           //Limpa o buffer de entrada se o usuário digitou algo não numérico
         while (getchar() != '\n');
         printf("Entrada invalido. Deve ser entre 1 e 50.\n");
        continue; //Volta ao inicio do loop
        }
         //Verificar se está no intervalo permitido
        if (n < 1 || n > 50) {
            printf("Número inválido. ");
        } 
        else {
             break; //Sai do loop se a entrada for valida conforme pedido. 
            }
     } 
         while (1);
    fibonacci[0] = 0;
     if ( n >= 2) fibonacci[1] = 1;
     for (int i =2; i < n; i++){
     | | fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
     }
    // Imprimir a sequencia dos números
    printf("Sequencia de Fibonacci ^com %d termos: \n" , n);
     for (int i = 0; i < n; i++) {
     | | printf"int i = 0; i < n; i++");
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
