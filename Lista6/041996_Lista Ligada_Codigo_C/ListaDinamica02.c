/**
* Faça um programa que carregue uma lista ligada na memória de valores inteiros. Após o carregamento da lista, mostre-a.
*/

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

struct no {
	struct no *prox;
	int valor;
};

void consulta(struct no* lista);
void insere_lista(struct no **inicio);

int main(){
	struct no *inicio;
	
	//Inclusao na lista
    insere_lista(&inicio);

	//Consulta Lista
	consulta(inicio);
	
    free(inicio);
	system("pause");
}

void insere_lista (struct no **inicio){
	struct no *novo, *fim;
    (*inicio) = (struct no*) malloc(sizeof(struct no));
	(*inicio)->prox = NULL;
	printf("Entre com o valor do primeiro elemento: ");
	scanf("%d",&(*inicio)->valor);
	fim = novo = (*inicio);
	
	while(novo->valor != -1){
	  novo = (struct no*) malloc(sizeof(struct no));	  
	  fim->prox = novo;
	  novo->prox = NULL;
	  printf("Entre com o novo valor: ");
	  scanf("%d", &novo->valor);
	  fim = novo;
	} 

}

void consulta(struct no *lista){
	printf("\n Imprimindo a Lista Singularmente Encadeada \n");
	int i = 1;	
	while(lista->prox != NULL) {
		printf("%d elemento da lista: %d \n", i, lista->valor);		
		lista=lista->prox;
		i++;
	}
}
