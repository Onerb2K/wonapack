/*Entrada: “Kobe 1” “Larry 3” “Lebron 4” “Kidd 2” “Shaquille 5”
Saída: “Kobe armador, Kidd armador, Larry ala, Lebron ala, Shaquille pivo”
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char jogador[5][20]; 
    int pos[5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("Digite o nome do jogador e sua posicao de 1 a 5:");
        scanf("%s %d", jogador[i], &pos[i]);
        getchar();//ignorar o espaço
    }
    for(i=0; i<5; i++)// imprimindo 
    {
        if(pos[i]==1) // simulando a ordem por posição(alfabetica)
        {
            printf("%s Armador\n", jogador[i]);
        }
    }
     for(i=0; i<5; i++)
    {
        if(pos[i]==2)
        {
            printf("%s Armador\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++){
        if(pos[i]==3)
        {
            printf("%s Ala\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++)
    {
        if(pos[i]==4)
        {
            printf("%s Ala\n", jogador[i]);
        }
    }
    for(i=0; i<5; i++)
    {
        if(pos[i]==5)
        {
            printf("%s Pivo\n", jogador[i]);
        }
    }
}
