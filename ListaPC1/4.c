/* 4) Crie um programa em C que recebe uma letra (de A a Z), imprime na tela se
ela é maiúscula ou minúscula e imprime uma faixa de letras, começando pela
letra digitada até alcançar a letra z, caso seja minúscula, ou Z, caso seja
maiúscula.
Exemplo:
Entrada: ‘K’
Saída: “Letra Maiúscula.
 K L M N O P Q R S T U V W X Y Z” */
 #include <stdio.h>
int main(void){
	char letra;
	printf("Digite a letra a ser analisada \n"); // recebe a letra
	scanf("%c",&letra); 
	if(letra >= 65 && letra <= 90){ // verifica se a letra é maiscula usando a tabela ascii
		printf("A letra é maiúscula \n ");

		// Imprimir a letra e as subsequentes

		for(int i = letra ; i <= 90 ; i++){
			printf("%c",i);
			
		}
		printf("\n");
	}
	else if( letra >= 97 && letra <= 122 ) {
		printf("A letra é minuscula \n ");

		// Imprimir a letra e as subsequentes

		for(int i = letra ; i <= 122 ; i++){
			printf("%c",i);
		}
		printf("\n");
	}
}
