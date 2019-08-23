/* 10) Usando a mesma lógica do exercício anterior, inclua uma casa decimal na
aproximação da raiz cúbica de X.
○ Dica: após encontrar o inteiro i, tal que (i * i * i) seja mais próximo de X,
aumente (ou diminua) 0,1, até encontrar o valor mais próximo de X.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float x, i = 0, mult, dif,dif2, fim,roubo,aux;
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
    roubo = cbrtf(x);
    //queremos que fim seja -0.1 até ser == roubo
    
    /*if( roub < fim ){
               
        }
    }
        
    }
    if( fim != roubo){
        fim-0.1;
    }
    */
    printf("A raiz com melhor aprox eh  : %f \n", roubo);
    
}
