/*Uma árvore de decisão é uma técnica bastante prática usada 
para a tomadade decisão. Após construída, ela pode ser usada 
para definir uma ação, deacordo com a ocorrência ou não de 
determinados eventos. Por exemplo, nafigura abaixo é mostrada uma 
árvore de decisão usada para definir se vale ounão a pena jogar 
tênis de acordo com características de um clima:*/
#include <stdio.h> 
int main(void){
	int x,y;
	printf("1-Chuvoso\n2-Nublado\n3-Ensolarado \n ");
	scanf("%d",&x);
	if(x == 1){
		printf("O vento está  1-Forte , 2-Fraco\n");
		scanf("%d",&y);
		if(y == 1){
			printf("Sem jogo de tênis\n");
		}
		if(y == 2){
			printf("Teremos jogo de tênis\n");
		}
	} // Fim do primeiro IF
	else if(x == 2){
		printf("Teremos jogo de tênis\n");
	}//Fim do segundoi if
	else if(x == 3){
		printf("A Umidade está : 1-Alta, 2-Normal, 3-Baixa\n");
		scanf("%d",&y);
		if(y == 1){
			printf("Sem jogo de tênis\n");
		}
		else if(y == 2){
			printf("Teremos jogo de tênis\n");
		}
		else if (y == 3){
			printf("Sem jogo de tênis\n");
		}
	}
}
