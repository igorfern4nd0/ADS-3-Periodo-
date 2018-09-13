#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dd;
	int mm;
	int aa;	
}dt;

int main(){
	dt *registro;
	int n, i;
	printf("Entre com a quantidade de registros: ");
	scanf("%d", &n);
	registro=(dt*)malloc(sizeof(dt)*n);

	for(i=0; i<n; i++){
		printf("\n");
		printf("Entre com o dia do %dº registro: ", i+1);
		scanf("%d", &registro[i].dd);
		printf("Entre com o mes do %dº registro: ", i+1);
		scanf("%d", &registro[i].mm);
		printf("Entre com o ano do %dº registro: ", i+1);
		scanf("%d", &registro[i].aa);
	}

	for(i=0; i<n; i++){
		printf("%dº Registro\n", i+1);
		printf("%d\n", registro[i].dd);
		printf("%d\n", registro[i].mm);
		printf("%d\n", registro[i].aa);
		printf("\n\n");
	}
	free (registro);
	registro = NULL;
}
