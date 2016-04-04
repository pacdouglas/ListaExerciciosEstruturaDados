#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

//Definicao do No;
struct no {
	struct no *prox; //ponteiro para o proximo no
	int valor; //valor armazenado dentro do no
};

/**
 * Metodo para retornar a quantidade de nós da lista
 * Entrada: ponteiro para a lista
 */
void consultar(no *lista);
void remover (int pos, no **olista, no *clista);

int main(){
	//Definicao dos ponteiro
	no *inicio; //ponteiro para o inicio da lista (primeiro no)
	no *fim; //ponteiro para final da lista (ultimo no)
	no *novo; //ponteiro para armazenar um novo no

	//Criacao da lista e do primeiro No da lista
	inicio = (no*) malloc(sizeof(no));
	inicio->prox = NULL;
	printf("Entre com o valor do primeiro elemento: ");
	scanf("%d",&inicio->valor);

	fim = novo = inicio; //ponteiros novo e fim apontam para o inicio da lista

	//Criacao de novos nos. Enquanto o usuario digitar número maior que zero
	while(novo->valor >0){
	  novo = (no*) malloc(sizeof(no));
	  fim->prox = novo;
	  novo->prox = NULL;
	  printf("Entre com o novo valor: ");
	  scanf("%d", &novo->valor);
	  fim = novo;
	}

	//Consulta Lista
	consultar(inicio);
	remover(3, &inicio, inicio);
	consultar(inicio);
	remover(1, &inicio, inicio);
	consultar(inicio);
	system("pause");
}

void remover (int pos, no **olista, no *clista){
	printf("\n Removendo posicao %d", pos);
	no *aux = clista;
	int count = 0;
	while( clista->prox != NULL){
		count++;
		if (count == pos){
			if (count == 1){
				(*olista) = aux->prox;
			} else {
				clista->prox = aux->prox;
			}
			free(aux);
			break;
		} else {
			if (count==1){
				aux = aux->prox;
			} else {
				aux = aux->prox;
				clista = clista->prox;
			}
		}
	}
}

void consultar(no *lista){
	printf("\n Consultando a Lista Singularmente Encadeada \n");
	int i = 0;
	while(lista->prox != NULL){
		i++;
		printf("%d elemento da lista: %d \n", i, lista->valor);
		lista=lista->prox;
	}
}
