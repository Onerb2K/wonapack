/*Crie um programa que receba dois valores inteiros X e Y, e imprima todos os
valores �mpares entre eles, incluindo os valores de X e Y, caso sejam
�mpares.
*/
#include <stdio.h> 
int main(void){
	int x,y;
	scanf("%d %d",&x,&y);
	for(int i = x; i <= y; i++){ // For come�ando de X e indo at� Y.
	    if( i % 2 != 0) // Verificar se o num � impar
	        printf(" %i eh impar \n",i ); //impressao
	}
}