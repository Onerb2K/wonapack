/*2)(Elemento mais frequente) ​Crie um programa em C que recebe um vetor decaracteres de tamanho 20 
do usuário e imprime o caractere com mais ocorrências no vetor seguido da quantidade de ocorrências deste.○Ex.: ​
Entrada: ​abcabcaaaaaaabcaabvr​ Saída: a 11
*/
#include <stdio.h>
int main(void)
{	
	char vetor[20];
	int qtdItens = 0 ;
	char letras[20]; // Armazenar as letras
	int qtd[20]; // qtd de cada letra
	int i, j; //indices
	int achou; // achou ou nao uma letra nova
	int maior = 0; // identificar a maior

	//Agora leremos os dados do Vetor

	for(i = 0; i < 20 ; i++){
			scanf("%c",&vetor[i] );
			getchar();
		}
		//Contagem dos elementos
		for(i = 0; i < 20 ;i++){
			achou = 0;
			// buscar o caracter do vetor letras 
			for(j=0;j<qtdItens;j++){
				if(vetor[i] == letras[j]){
					achou = 1;
					qtd[j] ++;
				}
			}
			if(!achou){
				letras[qtdItens] = vetor[i];
				qtd[qtdItens] = 1;
				qtdItens++;
			}
		}
		puts("quantidade de letras: ");
		for(i = 0; i < qtdItens ; i++){
			printf("%c %d \n",letras[i],qtd[i] );
		}
		for(i = 1 ; i < qtdItens;i++){
			if(qtd[i] > qtd[maior]){
				maior = i;
			}
		}
			printf("O maior elemento eh %c com  :%d \n", , qtd[maior]);
		}