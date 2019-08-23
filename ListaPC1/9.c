/*9) Crie um programa que recebe um número inteiro positivo X e imprime uma
aproximação do resultado inteiro da raiz cúbica de X. A raíz cúbica de X
pode ser definida como , quando .
Observações.:
? Neste exercício não deve ser usaad qualquer biblioteca matemática.
? O resultado da raiz cúbica de X, ou seja i, deve resultar no número
mais próximo possível de X.
? Ex.:
Entrada: X = 50
Para i = 3, temos 3*3*3 = 27, sendo que |50 - 27| = 23
Para i = 4, temos 4*4*4 = 64, sendo que |50 - 64| = 14 (mais próximo
de 50)
para i = 5, temos 5*5*5 = 125, sendo que |50 - 125| = 75 (menos
próximo)
Saída: 4
*/
#include <stdio.h>

int main()
{
    float x, i = 0, mult, dif,dif2, fim;
    printf("Digite um numero inteiro positivo que deseja descobrir a raiz\n");
    scanf("%f",&x);

    mult=i*i*i; // i^3

    dif=x-mult; // se x = 50 seria dif = 50-64, -14
    if(dif<0) 
    {
        dif=-dif;
    }
    i++; 
    mult=i*i*i;
    dif2=x-mult; 
    if(dif2<0) 
    {
        dif2=-dif2; 
    }
    i++; 
    while(dif2<dif) 
    {
        dif=dif2; 
        mult=i*i*i; 
        dif2=x-mult; 
        if(dif2<0) 
        {
            dif2=-dif2; 
        }
        i++; 
    }
    fim=i-2; 
    printf("A raiz cubica aproximada : %.2f\n", fim);
}