#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

struct no {
	struct no *ant;
	int valor;
	struct no *prox;
};

void consultar(no *lista);
void remover (int pos, no **lista);

int main(){
	no *inicio, *fim, *novo;

	//Inclusao na lista do primeiro elemento
	inicio = (no*) malloc(sizeof(no));
	inicio->ant = NULL;
	inicio->prox = NULL;

	printf("Entre com o valor do primeiro elemento: ");
	scanf("%d",&inicio->valor);

	fim = novo = inicio;

	while(novo->valor != -1){
	  novo = (no*) malloc(sizeof(no));
	  fim->prox = novo;
	  novo->ant = fim;
	  novo->prox = NULL;
	  fim = novo;
	  printf("Entre com o novo valor: ");
	  scanf("%d", &novo->valor);
	}

	//Consulta Lista
	consultar(inicio);
	remover(3, &inicio);
	remover(1, &inicio);
	consultar(inicio);
	system("pause>null");
}

void remover (int pos, no **lista){
	printf("\n Removendo a %d§ posicao da LIsta Duplamente Ligada \n", pos);
	no *aux = (*lista);
	no *anterior;
	int count = 0;
	while (aux->prox != NULL){
		count++;
		if (count == pos){
			if(count == 1){
				(*lista) = aux->prox;
			} else {
				anterior = aux->ant;
				anterior->prox = aux->prox;
			}
			free(aux);
			break;
		} else {
			//printf("\n valor: %d \n", aux->valor);
			aux = aux->prox;
			//aux=aux->prox;
		}
	}
}

void consultar(no *lista){
	printf("\n Imprimindo a Lista Duplamente Encadeada \n");
	int i = 1;
	while(lista->prox != NULL){
		printf("%d elemento da lista: %d \n", i, lista->valor);
		if (lista->ant == NULL) printf("==>ant: NULL \n");
		else printf("==>ant: %d\n", (lista->ant)->valor);

		if (lista->prox == NULL) printf("==>prox: NULL \n");
		else printf("==>prox: %d\n", (lista->prox)->valor);

		lista=lista->prox;
		i++;
	}
}
