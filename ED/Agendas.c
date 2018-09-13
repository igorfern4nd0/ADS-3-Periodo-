#include <stdio.h>
#include <stdlib.h>
typedef struct{
	char pri_nome[20];
	char sobrenome[20];
}Nome;

typedef struct{
	int dia;
	int mes; 
	int ano;
}Data_aniver;

typedef struct{
	char rua[20];
	int numero;
	char complemento[20];
	char bairro[20];
	char cep[20];
	char cidade[20];
}Endereco;

typedef struct{
	char ddd[4];
	char numero[11];
}Telefone;

typedef struct{
	Nome nome;
	char e_mail[50];
	char dataNac[11];	
	Data_aniver data;
	Endereco endereco;
	Telefone telefone;
	char obs[50];
}Agenda;


ler(Agenda *registro, int limite);
buscaPri_nome(Agenda *registro, int limite);

main(){
	Agenda *registro;
	int n, i;
	printf("Entre com a quantidade de registros: ");
	scanf("%d", &n);
	registro=(Agenda*)malloc(sizeof(Agenda)*n);
	ler(registro, n);

	for(i=0; i<n; i++){
		printf("%s\n", registro[i].nome.pri_nome);
	}
	free (registro);
	registro = NULL;
}

ler(Agenda *registro, int limite){
	int i;
	for(i=0; i<limite; i++){
		printf("\n");
		printf("Entre com o nome do %dº registro: ", i+1);
		scanf("%s", &registro[i].nome.pri_nome);
		printf("Entre com o E-mail do %dº registro: ", i+1);
		scanf("%s", &registro[i].e_mail);
		printf("Entre com o dia de nascimento do %dº registro: ", i+1);
		scanf("%s", &registro[i].data.dia);
		printf("Entre com o mes de nascimento do %dº registro: ", i+1);
		scanf("%d", &registro[i].data.mes);
		printf("Entre com o ano de nascimento do %dº registro: ", i+1);
		scanf("%d", &registro[i].data.ano);
		printf("Entre com o nome da rua do %dº registro: ", i+1);
		scanf("%s", &registro[i].endereco.rua);
		printf("Entre com o numero da casa do %dº registro: ", i+1);
		scanf("%d", &registro[i].endereco.numero);
		printf("Entre com o complemento de endereco do %dº registro: ", i+1);
		scanf("%s", &registro[i].endereco.complemento);
		printf("Entre com o nome do bairro do %dº registro: ", i+1);
		scanf("%s", &registro[i].endereco.bairro);
		printf("Entre com o CEP do %dº registro: ", i+1);
		scanf("%s", &registro[i].endereco.cep);
		printf("Entre com a cidade do %dº registro: ", i+1);
		scanf("%s", &registro[i].endereco.cidade);
		printf("Entre com o DDD do %dº registro: ", i+1);
		scanf("%s", &registro[i].telefone.ddd);
		printf("Entre com o numero de telefone do %dº registro: ", i+1);
		scanf("%s", &registro[i].telefone.numero);
		printf("Entre com a observacao do %dº registro: ", i+1);
		scanf("%s", &registro[i].obs);
	}
}

buscaPri_nome(Agenda * registro, int limite){
	int i=0;
	for(i=0; i<limite; i++){
		
	}
}