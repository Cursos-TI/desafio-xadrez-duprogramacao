#include <stdio.h>
//bispo são 5 casas pra diagonal-cima, torre 5 casas pra direita, torre 8 casas, rainha 8 casas
// pra esquerda
void moverTorre (int casas){

    if (casas > 0){
        printf("Direita\n");
        moverTorre (casas - 1);
    }
}
void moverBispo (int casas3){
    if (casas3 > 0){
        printf("Cima - direita\n");
        moverBispo (casas3 - 1);
    }
}

void moverRainha (int casas2){

    if (casas2 > 0){
        printf("Esquerda\n");
        moverRainha (casas2 - 1);
    }
}

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
