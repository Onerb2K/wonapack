/*3) (Arredondamento) ​Crie um programa em C que recebe como entrada umvetor de 10 pontos flutuantes
de precisão dupla (double). Para cada elementodo vetor, deve-se arredondar o valor para cima, caso
sua primeira casadecimal seja maior ou igual que 5, ou para baixo, caso contrário. Por fim,
imprima o vetor resultante. (​Obs.: não deve ser usada a biblioteca math.h​)
Ex.:Entrada:​ 1.4, 2.56, 3.0, 4.5, 5.99, 6.0, 7.499, 9.06, 10.499Saída: 1.0, 3.0, 3.0, 5.0, 6.0, 6.0, 7.0, 9.00, 10.00
*/
#include <stdio.h>
#define tam 2
int main(void)
{
    double vet[tam];
    int i;
    double decimal;
    //Leitura do vetor
    for(i = 0 ; i < tam ; i++)
    {
        scanf("%lf",&vet[i]);

        decimal = vet[i] - (int)vet[i]; // tirando a parte inteira do decimal

        if(decimal >= 0.5 )
        {
            vet[i] = (int)vet[i]+1 ;
        }
        else
        {
            vet[i] = (int)vet[i];
        }
    }
    for(i = 0; i < tam ; i++)
    {
        printf("o vetor eh: %d o res eh:%.2lf \n",i,vet[i]);
    }
}
