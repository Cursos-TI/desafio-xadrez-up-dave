#include <stdio.h>

int main() {
    int torre =0, bispo =0, rainha =0, cavalo =0; //variáveis

    printf("### Jogo de Xadrez da MateCheck !! ###\n");
    printf("\n");

    //mover a torre 5 casas para direira
    printf("## Movendo a Torre\n");     // <-- utilizando while
    while (torre <5)
    {
        printf("Direita\n"); // Direção do movimento    
        torre++;
    }   
    printf("\n");
    
    //mover o bispo 5 casas na diagonal para cima e direita
    printf("## Movendo o Bispo\n");    // <-- utilizando do-while
    do
    {
        printf("Cima - Direita\n"); // Direção do movimento
        bispo++;
    } while (bispo <5); //condição

    printf("\n");

    //mover a rainha 8 casas para direita
    printf("## Movendo a Rainha\n");    // <-- utilizando for
    
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Direita\n"); // Direção do movimento
    }
    
    printf("\n");
    
    //mover o cavalo 2 casas para baixo e 1 para a esquerda
    printf("## Movendo o Cavalo\n");   // <-- utilizando Loops Aninhados (for e while)
    while (cavalo < 2)
    {
        for (cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Baixo\n"); // Direção do movimento
        }
        {
            printf("Esquerda\n"); // Direção do movimento
        }        
    }
    
    printf("\n");

    



    return 0;
}
