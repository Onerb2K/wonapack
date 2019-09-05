#include <stdio.h>
#include <string.h>

int main(void)
{
    char jogador[5][20];
    int posicao[5];
    int i;
    int maior;

    for(i=0; i<5; i++)
    {
        printf("Digite o nome do jogador e sua posicao de 1 a 5:");
        scanf("%s %d", jogador[i], &posicao[i]);
        getchar();
    }
    for(i=0; i<5; i++)
    {
        if(posicao[i]==1)
        {
            printf("%s Armador\n", jogador[i]);
        }
    }
     for(i=0; i<5; i++)
    {
        if(posicao[i]==2)
        {
            printf("%s Armador\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++){
        if(posicao[i]==3)
        {
            printf("%s Ala\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++)
    {
        if(posicao[i]==4)
        {
            printf("%s Ala\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++)
    {
        if(posicao[i]==5)
        {
            printf("%s Pivo\n", jogador[i]);
        }
    }
}
