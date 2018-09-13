#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int info;
	struct Lista * prox;
}Lista;

void criarLista(Lista * lista){
	lista = NULL;
}

Lista * inserirNoInicio(Lista * lista, int valor){
	Lista * novo;
	novo = (Lista *) malloc (sizeof(Lista));
	novo -> prox = lista;
	novo -> info = valor;

	return novo;
}	


int main(){
 	Lista * lista, * posicaoAnt;
 	int condicao = 1, valor;
 	criarLista(lista);
	while(condicao == 1){
		printf("Digite o numero: ");
		scanf("%d", &valor);
		if(lista == NULL){
			lista = inserirNoInicio(lista, valor);
		}
		posicaoAnt = lista;
		else{
			if(valor < lista)
		}
		printf("Deseja inserir mais um numero? [1] Sim || [0] Não: ");
		scanf("%d", &condicao);
		
	}
	return 0;

}

/*
Lista *

*/