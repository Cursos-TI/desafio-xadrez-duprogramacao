#include <stdio.h>



int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    
    
    int torre;
    int bispo = 0;
    int rainha = 1;
    int opcao;

    printf("Selecione a opção.\n");
    printf("1. Torre\n");
    printf("2. Bispo.\n");
    printf("3. Rainha.\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: 
            for (torre = 0; torre <= 8; torre++) {
            printf("Torre movimentando para: Direita.\n"); }
        break;

        case 2:
            while(bispo <= 8 ){
                printf("Movimentando para: Cima - Direita.\n");
                bispo++;
            }
        break;

        case 3:
            do{
             if (rainha <= 8)
                    printf("Rainha movimentando para: Esquerda - Cima\n");
                    rainha++;
            } while (rainha <= 8);
        break;
        default:
        printf("Opção inválida.\n");
        break;
    }


    return 0;
}
