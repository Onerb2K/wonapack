#include <stdio.h> 
int main(void){
	float w, d, f,a,pi,pf,m;
	printf("Digite a Massa\n");
	scanf("%f",&m);
	printf("Digite a Aceleração\n");
	scanf("%f",&a);
	printf("Digite pos inicial\n");
	scanf("%f",&pi);
	printf("Digite a pos final\n");
	scanf("%f",&pf); 
	//Diferenca entre as posicoes finais e inicias == A
	d = pf - pi ; 
	f = m * a;
	w = f * d ;
	printf("w : %f", w);


}