/*5) Crie um programa em C que receba N valores reais (N fornecido pelo
usuário). Após isso, exiba a média aritmética desses valores*/
#include <stdio.h>
int main (void){
int n,cont=0,a;

float soma, media; 

scanf("%d",&n);

for(int i = 0; i < n;i++){

scanf("%i",&a);

soma = soma + a;

cont ++;

}
media = soma / cont;

printf("a media eh : %.2f \n",media);
}
