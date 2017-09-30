#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>

// defini��o da estrutura da lista (n�)
typedef struct elemento{
	int info;
	struct elemento *prox;
}no;

//tipo no que armazena um dado do ponteiro no no

no *inicio;
void IniciaLista(){
inicio=NULL;
}
//Fun��o para inserir um n� no inicio da lista
int InsereNoInicio(int dado){
	no *novo, *aux;
	novo=(no*)malloc(sizeof(no));
	if(novo==NULL){
		printf("\n\n Sem espa�o para alocacao");
		return 0;
	}

	novo->info=dado;
	novo->prox=NULL;
	aux=inicio;
	if(inicio==NULL)
		inicio=novo;
	else{
	novo->prox=aux;
		inicio=novo;
	}
	return 2;
}
void ExibeLista(){
	no *aux;
	aux=inicio;
	while(aux!=NULL){
		printf("%d " ,aux->info);
		aux=aux->prox;
	}
	printf("\n Fim da lista");
	return;
}

int LeInfo(){
	int num;
	printf("\n Digite um numero");
	scanf("%d",&num);
	return num;
}

main(){
	int n, op=1, ok;
	IniciaLista();
	ExibeLista();
	while(op==1){
		n=LeInfo();
		ok=InsereNoInicio(n);

		if(ok)
		printf("\n elemento inserido com sucesso\n");
		else
		printf("\n\nLista");
		ExibeLista();
		printf("\n\n deseja continuar ?(1,0)");
		scanf("%d",&op);
	}
}
