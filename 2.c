/*Crie um programa que receba dois valores inteiros X e Y, e imprima todos os
valores ímpares entre eles, incluindo os valores de X e Y, caso sejam
ímpares.
*/
#include <stdio.h> 
int main(void){
	int x,y;
	scanf("%d %d",&x,&y);
	for(int i = x; i <= y; i++){ // For começando de X e indo até Y.
	    if( i % 2 != 0) // Verificar se o num é impar
	        printf(" %i eh impar \n",i ); //impressao
	}
}