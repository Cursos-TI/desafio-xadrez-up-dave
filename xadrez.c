#include <stdio.h>

    //Função recursiva para mover a torre
    void moverTorre(int torre) {
        if (torre < 5) {
            printf("Direita\n");
            moverTorre(torre + 1);
        }
    }
    //fução recursiva para mover a rainha
    void moverRainha(int rainha) {
        if (rainha < 8) {
            printf("Direita\n");
            moverRainha(rainha + 1);
        }
    }



int main() {
    int torre =0, bispo =0, rainha =0, cavalo =0; //variáveis

    printf("### Jogo de Xadrez da MateCheck !! ###\n");
    printf("\n");

    //mover a torre 5 casas para direira
    printf("## Movendo a Torre\n");   
       moverTorre(torre); // <-- utilizando recursividade para mover a torre    

    printf("\n");
    
    //mover o bispo 5 casas na diagonal para cima e direita
    printf("## Movendo o Bispo\n");     // <-- utilizando loops aninhados (for)
        for (int i = 0; i < 5; i++){    // <-- Loop externo controla a quantidade de movimentos
            for (int j = 0; j < 1; j++){    // <-- A cada movimento, o loop interno é executado
                printf("Cima\n");  // Direção do movimento
                printf("Direita\n"); // Direção do movimento
            }         
        }

    printf("\n");

    //mover a rainha 8 casas para direita
    printf("## Movendo a Rainha\n");    
        moverRainha(rainha);    // <-- utilizando recursividade para mover a rainha

    printf("\n");
    
    //mover o cavalo 2 casas para cima e 1 para a direita
    printf("## Movendo o Cavalo\n");   // <-- utilizando Loops complexos (for)
        
    
    printf("\n");

    



    return 0;
}
