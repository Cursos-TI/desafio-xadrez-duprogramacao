#include <stdio.h>


//funções void para cada peça do xadrez

void moverTorre (int casas){

    if (casas > 0){
        printf("Direita\n");
        moverTorre (casas - 1);
    }
}
void moverBispo (int casas3){
    for (int i = 0; i < 5; i++){
        for (int j = 1; j > 0; j--){
            printf("Movendo para: Direita\n");
        }
    printf("Movendo para: Cima.\n");
    }

}

void moverRainha (int casas2){

    if (casas2 > 0){
        printf("Esquerda\n");
        moverRainha (casas2 - 1);
    }
}
// menu com loop e leitura de case para mostrar cada opção
int main() {
    int opcao;
    int cavalo;
        do{
        printf("Selecione a opção.\n");
        printf("1. Torre\n");
        printf("2. Bispo.\n");
        printf("3. Rainha.\n");
        printf("4. Cavalo.\n");
        printf("5. Sair\n");
        scanf("%d", &opcao);

            switch(opcao){
        
        case 1: 
            moverTorre (5);
            
        break;

        case 2:
            moverBispo (5);
            
        break;

        case 3:
            moverRainha(8);
            
        break;

        case 4:
            for (cavalo = 1; cavalo > 0; cavalo--){
                for(int i = 1; i <= 2; i++)
                {
                 printf("Cavalo movimentando para: Cima.\n");   
                }
            printf("Cavalo movimentando para: Direita.\n");
            }
            break;
            
        case 5:
            printf("Saindo...\n");
            break;


        default:
        printf("Opção inválida.\n");
        break;}
    } while (opcao != 5);
    


    return 0;
}
