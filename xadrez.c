#include <stdio.h>

int main() {
    int torre =0, bispo =0, rainha =0;

    printf("### Jogo de Xadrez da MateCheck !! ###\n");
    printf("\n");

    //mover a torre 5 casas para direira
    printf("## Movendo a Torre\n");
    while (torre <5)
    {
        printf("Direita\n"); // Direção do movimento    
        torre++;
    }   
    printf("\n");
    
    //mover o bispo 5 casas na diagonal para cima e direita
    printf("## Movendo o Bispo\n");
    do
    {
        printf("Cima - Direita\n"); // Direção do movimento
        bispo++;
    } while (bispo <5); //condição

    printf("\n");

    //mover a rainha 8 casas para direita
    printf("## Movendo a Rainha\n");
    
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Direita\n"); // Direção do movimento
    }
    
    return 0;
}
