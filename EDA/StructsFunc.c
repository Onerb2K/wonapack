# include <stdio.h>
# include <string.h>

#define MAX 5

typedef struct game{
  int qtdy_life;
  float lifetime;
  char name[101];
}game;

typedef struct pilha{
  game dados[MAX];
  int topo;
}pilha;

void inicializa(pilha *X)
{
  X->topo = -1;
}

int vazia(pilha X){
    if(X.topo == -1)
        return 1;
    else
        return 0;
}

int cheia(pilha X){
    if(X.topo == MAX - 1)
        return 1;
    else
        return 0;
}

int empilha(pilha *X, game G)
{
    if (cheia(*X)) { 
       return 0;
       //pilha cheia nao da pra empilhar mais nada 

    } else {
       (X->topo)++;    
       X->dados[X->topo] = G;
       return 1;
    }
}

int desempilha(pilha *X, game *G)
{
     if (vazia(*X)) 
         return 0;
     else 
        {
          *G = X->dados[X->topo];
          (X->topo)--; 
          return 1;
	}
}
// 1 )Escrever uma função que receba como parâmetro uma pilha. A função deve retornar o maior elemento da pilha. A passagem deve ser por valor ou referência?
// #define MAX 100
/*push() – Insere um elemento na pilha
pop() – Remove um elemento da pilha
empty() – Verifica se a pilha está vazia */

int maiordapilha(pilha X){ // pilha = 10 , 20 , 30 , 4
  int maior, g;
  if(empty(A) == 0)
    maior = pop(&A);
  else 
    return 0;
  while(empty(A) == 0){
    g = pop(&A);
    if(g > maior)
      maior = g;
  }
  return maior;
}
// 2 )Escreva uma função que receba como parâmetro duas pilhas e verifique se elas são iguais. Duas pilhas são iguais se possuem os mesmos elementos, na mesma ordem.
int pilhasiguais(pilha X,pilha Y){ 
  int g,f,igual = 1 ; 
  while(empty(X) == 0 && empty(Y) == 0){ // enquanto estao vazias
    g = pop(&X);//desempilha o primeiro elemento de X e atribui a g 
    f = pop(&Y); // """""""""""""""""""""""""""""""""""""""""""""
  if(g != f){ // verifica se é diferente
    igual = 0; // se é dif retorna 0
  }
}
  //Se uma está vazia e outra não, e o mesmo vale para o contrario
  if((empty(X) == 0 && empty(Y) == 1) || (empty(X) == 1 && empty(Y) == 0)){
  igual = 0; // Logo elas não serão iguais, pois tem tamanhos diferentes
}
 return igual;
 //igual = 1, é igual, 0 nao eh
}
// 3 ) Escreva uma função que preencha uma pilha passada como parâmetro com os elementos de um vetor passado como parâmetro.
void preenche(Pilha A, int v[]){ // recebe um vetor e uma pilha
  int tamanho = sizeof(v) / sizeof(v[0]); // verificar o tamanho do vetor
  for(int i = 0; i<tamanho; i++){ // for para percorrer o vetor
      push(&A, v[i]); // adiciona os elementos 1 por 1 a pilha
  }
 }
 /* 4 ) Construa um programa utilizando uma pilha que resolva o seguinte problema: Armazene as placas dos carros 
 (apenas os números) que estão estacionados numa rua sem saída estreita. Dado uma placa verifique se o carro está 
 stacionado na rua. Caso esteja, informe a sequência de carros que deverá ser retirada para que o carro em questão consiga sair.
 */
 void carro(Pilha A, Pilha B, int placa){// 2 pilhas e uma placa
 Pilha B;
 int g, contador = 0;
 while(empty(A) != 0){ //enquanto pilha for maior que 0 
  g = pop(&A); // g recebe o primeiro elemento de A
  if(g == placa){ //Se g == placa, sendo g o primeiro elemento da pilha
   printf("Tem que tirar %d carros\n", contador);
   while(empty(B) != 0){ //enquanto for > que 0, existir algo na pilha 
    push(&A, g);//
    g = pop(&B);// g = desempilha o primeiro de b
   }
   break;
  }
  contador++;
  push(&B, g);
 }
 while(empty(B) != 0){
  g = pop(&B);
  push(&A, g);
 }
} 
 /* 5 ) Utilizando uma pilha resolver o exercício a seguir: Dada uma sequência contendo N (N >0) números reais, imprima na ordem inversa. */
void inversa(int V[], int tamanho){ // um vetor e seu tamanho
  int i;
  for(i = 0; i < tamanho; i++){
  push(&A, V[i]); // empilha os elementos do vetor na pilha
  }
  while(empty(A) == 0) // enquanto ela n for vazia.
  printf(“%i”, pop(&A)); // imprime desimpilhando os elementos
}
/* 6 )Implemente uma função chamada TPilha, que receba um vetor de inteiros com 15 elementos. Para cada um deles, como segue:
se o número for par, insira-o na pilha;*/
int Tpilha(int vet[], Pilha st){ // recebe um vetor e uma pilha 
int i;
  for(i = 0; i < 15; i++){ 
    if(vet[i]%2 == 0) // verifica se é par
      push(&st, vet[i]); // quando é par adiciona para pilha
    else  pop(st); // se nao for, desempilhe.
}
    while(!empty(st)){ //enquanto nao for vazia 
      printf(“%d”, pop(&st));//imprime toda a pilha 
}

int main(){
  game G;
  int x;
  char n[101];
  float y;
  pilha A;
  inicializa(&A);
    printf("Digite o nome do jogo: ");
    scanf("%s", &n);
    printf("Digite o tempo de vida: ");
    scanf("%f", &y);
    printf("Digite a qtde de vida: ");
    scanf("%i", &x);
    G.lifetime = y;
    strcpy(G.name,n);
    G.qtdy_life = x;
    if (vazia(A)) printf("vazia\n");
    else printf("não vazia");
    empilha(&A, G);
    if (vazia(A)) printf("\nvazia");
    else printf("não vazia");
    desempilha(&A, &G);
    if (vazia(A)) printf("\nvazia");
    else printf("não vazia");
 
}
