/**
* Faça um programa que carregue uma lista ligada na memória de valores inteiros. Após o carregamento da lista, mostre-a.
*/

#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

struct no {
	struct no *prox;
	int valor;
};

void consulta(no* lista);

int main(){
	no *inicio, *fim, *novo;
	
	//Inclusao na lista
	inicio = (no*) malloc(sizeof(no));
	inicio->prox = NULL;
	printf("Entre com o valor do primeiro elemento: ");
	scanf("%d",&inicio->valor);

	fim = novo = inicio;

	while(novo->valor != -1){
	  novo = (no*) malloc(sizeof(no));
	  fim->prox = novo;
	  novo->prox = NULL;
	  printf("Entre com o novo valor: ");
	  scanf("%d", &novo->valor);
	  fim = novo;
	}

	//Consulta Lista
	consulta(inicio);
	free(inicio);
	free(novo);
	free(fim);
	system("pause");
}

void consulta(no *lista){
	printf("\n Imprimindo a Lista Singularmente Encadeada \n");
	int i = 1;
	while(lista->prox != NULL){
		printf("%d elemento da lista: %d \n", i, lista->valor);		
		lista=lista->prox;
		i++;
	}
}
