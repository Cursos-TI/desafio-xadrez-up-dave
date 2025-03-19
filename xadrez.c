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
    // Função recursiva para mover o bispo na diagonal
    void moverBispo(int passo) {
        if (passo < 5) { // O bispo se move 5 casas na diagonal
            printf("Cima\n");

            // Loop aninhado para o movimento horizontal (Direita)
            for (int j = 0; j < 1; j++) { 
                printf("Direita\n");
            }

            moverBispo(passo + 1); // Chamada recursiva para continuar o movimento
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
    printf("## Movendo o Bispo\n");
        moverBispo(bispo); // <-- utilizando recursividade para mover o bispo
    
    printf("\n");

    //mover a rainha 8 casas para direita
    printf("## Movendo a Rainha\n");    
        moverRainha(rainha);    // <-- utilizando recursividade para mover a rainha

    printf("\n");
    
    //mover o cavalo 2 casas para cima e 1 para a direita
    printf("## Movendo o Cavalo\n");   // <-- utilizando Loops complexos (for)
        for (int i = 0, j = 2; i < 3; i++, j--) {       // loop externo controla a quantidade de movimentos
            if (j > 0) {
                printf("Cima\n"); // Move duas casas para cima
            } else {
                printf("Direita\n"); // Move uma casa para a direita
                break;  // Sai do loop após concluir o movimento
            }
    }
    
    printf("\n");

    



    return 0;
}
