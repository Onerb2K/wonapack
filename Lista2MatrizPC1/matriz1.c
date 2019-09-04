/*
1) (Desvio Padrão) Crie um programa em C que calcule o desvio padrão de um
vetor de ponto flutuantes de precisão simples (float) de tamanho 10 fornecido
pelo usuário. A fórmula do desvio padrão é dada abaixo:
*/
#include <stdio.h>
#define tam 10
#include <math.h>

int main(void){
	float media,dp=0,dpf;
	float vetor[tam];
	int j = 0;
	float soma=0;
	for(int i = 0 ; i < tam ; i++){ // Para preencher o vetor precisamos de um laço
	printf("Entre com os elementos do vetor\n" );
	scanf("%f",&vetor[i]); // cada posição do vetor recebe um valor
}
	for(int i = 0 ; i < tam ; i++){ // Para imprimir um vetor tambem precisamos de um laço
		printf("elemento %d : %.2f\n",j, vetor [i] ); // imprimindo os elementos 1 por 1
		j++;
}
	// desvio padrão eh  dado por D = (elemento1+elemento2+...+elementoN ) -/ qtdelementos ;
	// dp = (sqrt(ele1 - D)^2 + (ele2 - D)^2 + (eleN - D)^2 )  / qtdelementos;
	for(int i = 0 ; i < tam ; i++){
	// 0 = 0 + 1.55
	// 1.55 = 1.55 + 1.70 etc...
	soma = soma + vetor[i];
	}
	media = soma / tam ;
	printf("O valor da media  eh:%f\n", media ); // imprimindo o valor de d, que será usado para achar o dp

	//pow usado para calcular potencia, no caso elemento1 ^ 2, e o sqrt que é usado para acharmos a raiz;

	//dp = ((((pow((vetor[0] - d),2))+ (pow((vetor[1]-d),2))+pow((vetor[2]-d),2)) + (pow((vetor[3] - d)),2)+(pow((vetor[4]-d),2))+(pow((vetor[5]-d),2)) + (pow((vetor[6] - d)),2)+ (pow((vetor[7]-d),2))+ (pow((vetor[8]-d),2)) + (pow((vetor[9] - d),2))) / 10) ;

	for(int i = 0 ; i < tam ; i++){
	dp = dp + pow((vetor[i] - media), 2);
 	}
	dp = sqrt(dp/tam);

	printf("O valor final do desvio padrao eh : %f\n", dp );

}
//1,55 1,70 e 1,80
