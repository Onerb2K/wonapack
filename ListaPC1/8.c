
/*8) Crie um programa em C que, dados números reais a, b e c, calcule as raízes
de uma equação do 2º grau da forma ax2
 + bx + c = 0. Imprimir a solução em
uma das seguintes formas:
“A equação tem raiz DUPLA\n x = <raiz>”
“A equação tem raízes reais\nx1 = <raiz1>\nx2 = <raiz2>”
“A equação tem raiz imaginaria\nParte real = <parte real>\nparte imaginaria
= <parteImaginaria>”
Onde <raiz> é o valor da raiz da equação e <parteImaginaria> é o valor da
parte imaginária.
Observação: Em C, para extrair raiz quadrada use a função sqrt (coloque
#include <math.h> antes do main e insira o argumento -lm no final do
comando gcc (“gcc 5.c -o 5 -lm”).*/

#include <stdio.h>
#include <math.h>
int main (void)
{
    float delta;
    float a,b,c,raiz;
    float x1,x2;
    puts("Digite o valor de B, A e C ");
    scanf("%f %f %f",&b,&a,&c);
    delta = ((b*b) - (4 * (a * c)));
    if(delta < 0)
    {
        printf("Nenhuma raiz real, delta menor q 0 \n ");
        printf("%.2f"\n,delta);
	printf(" Parte imaginaria i : %.2f\n",sqrt(delta));
    }
    else if( delta == 0)
    {

        //Sabemos o valor de delta, unica raiz real

        printf("Uma unica raiz real, delta igual a zero. \n ");

        x1 = ((-b )/(2*a));
        printf("x1 =  %.2f\n",x1);
    }
    else if( delta > 0)
    {
        printf("Duas raizes reais, delta for maior que zero \n");
        /*x1 = ((-b + sqrt(delta)) / ( 2 * a ));
        x2 = ((-b - sqrt(delta)) / ( 2 * a ));
        printf("X1 = %.2f\n X2 = %.2f\n", x1,x2);
        */
        printf(" X1 = %.2f\n X2 = %.2f\n",((-b + sqrt(delta)) / ( 2 * a )),((-b - sqrt(delta)) / ( 2 * a ))  );

    }

}
