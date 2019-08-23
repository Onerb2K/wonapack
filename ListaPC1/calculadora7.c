/* Crie um programa em C que implemente uma calculadora simples, 
cujas operações são : soma (+), subtração (-), divisão(/) e multiplicação
OBS:Para cada caractere/digito o digitado deve-se apertar enter.
A Calculadora termina sua execução quando o user digitar '='
*/
#include <stdio.h> 
int main(void){
	float n1,n2;
	char op = ' '; //iniciar com espaço
	//Ler um operando
	printf("Digite o primeiro numero\n");
	scanf("%f",&n1);
	getchar(); //Limpar o buffer e excluir o \n
	//Loop até op '='
	while(op != '='){
	//ler um operador
		printf("Digite o operador\n");
		scanf("%c",&op);
	// ENter conta como a tecla de \n
	switch(op){
	//Leio um operando
	//realizo a conta 
		case '+':
		printf("Digite o segundo numero\n");
			scanf("%f",&n2);
			n1 = n1 + n2;
			break;
			//N1 é um acumulador
		case '-':
		printf("Digite o segundo numero\n");
			scanf("%f",&n2);
			n1 = n1 - n2;
			break;
		case '*':
		printf("Digite o segundo numero\n");
			scanf("%f",&n2);
			n1 = n1 * n2;
			break;
		case '/':
		printf("Digite o segundo numero\n");
			scanf("%f",&n2);
			if(n2 == 0){
				printf("Não pode dividir por 0 ñ migão\n");
				break;
			}
			n1 = n1 / n2;

			break;
		case '=':
		break;
		default:
			printf("Operador invalido\n");

	}
	getchar(); // Limpar o buffer para ler o prox operando.
	printf("--> %.2f \n",n1); //Imprimir o resultado a cada iteração
}
//printf("%3.f \n",n1 ); // Imprimiria o resultado no final
}
/* ler o numero e entrar em um loop
*/