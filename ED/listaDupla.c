/*
LISTA DUPLA 11/09 POSSUI ANTERIOR PRINCIPAL E PROXIMO NO NÓ

PARA PRATICAR, FAZER A FUNÇÃO PARA INSERIR EM ORDEM.

*/




#include <stdio.h>
#include <stdlib.h>

typedef struct{
	struct Lista2 * ant;
	int info;
	struct Lista2 * prox;
}Lista2;

Lista2 * inserirIni(Lista2 * l, int v);

Lista2 * inserirFim (Lista2 * l, int v);

int main()
{
	Lista2 * l1;
	l1 = inserirIni (l1, 6);
	return 0;
}

Lista2 * inserirIni(Lista2 * l, int v){
	Lista2 * novo;
	novo = (Lista2 * ) malloc(sizeof(Lista2));
	novo -> info = v; //atribuindo o valor para o novo nó
	novo -> ant = NULL; //por ser o primeiro elemento, anterior não recebe nada 
	novo -> prox = l; //emenda o novo elemento com a cabeça da lista
	if(l != NULL){
		l -> ant = novo;
	}
	return novo;


Lista2 * inserirFim (Lista2 * l, int v){
	Lista2 * novo, * aux = l;
	novo = (Lista2 * ) malloc(sizeof(Lista2));
	novo -> info = v;
	novo -> prox = NULL;
	if(l == NULL){ // se a lista for vazia
		novo -> ant = NULL; // novo elemento não tera nada antes.
		return novo; // novo elemnto passa a ser a cabeça da lista.
	}
	while(aux -> prox != NULL){
		aux = aux -> prox; // anda até encontrar o fim da lista e aponta pra ele.
	}
	novo -> ant = aux; // anterior do novo elemento recebe o fim da lista, pois aux esta apontando pro final.
	aux -> prox = novo; // fim da lista emenda com o novo elemento. 
	return l;

}