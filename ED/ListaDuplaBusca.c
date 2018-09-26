Lista2 * busca (Lista2 * l, int v){
	Lista2 * aux = l;
	while (aux != NULL && aux -> info != v){
		aux = aux -> prox;
	}
	return aux;
}

Lista2 retira (Lista2 * l, int v){
	Lista2 * aux;
	if (l == NULL){
		return NULL;
	}
	aux = busca(l, v);
	if(aux != NULL){
		
		//1º if)
		if(aux -> prox != NULL){//SITUAÇÃO NÓ NO CENTRO: só entra se existir um proximo. 
			aux -> prox -> ant = aux -> ant; /*A ponta esquerda do proximo nó, aponta para o nó anterior ( recebe NULL se for o nó em primeiro 
			na lista), elimindando o nó desejado*/
		}
		//2º if)
		if(aux -> ant == NULL){ //situação nó em primerio, entra se não existir um anterior. 
			l = aux -> prox; // a cabeça da lista recebe o proximo elemento, eliminando o desejado.
		}
		else 
			aux -> ant -> prox = aux -> prox;//      
			// A ponta direita do nó anterior aponta para o proximo nó, elimindando o nó desejado;
			 
		//situação nó no final da lista, não entrara no 1º if encadeado.
	}
	free aux;
	return l; 
}