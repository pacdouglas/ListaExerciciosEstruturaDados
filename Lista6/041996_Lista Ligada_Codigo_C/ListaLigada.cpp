#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct no{
       struct no *prox;
       int valor;
};

void insere_lista(struct no **inicio, int v);
void consulta(struct no *lista);
int remover (int pos, struct no **olista, struct no *clista);
int menu();

int main(){
     struct no *inicio=NULL;
     int opcao=0, elem, pos;
     while (opcao!=4){
           opcao=menu();
           switch (opcao){
                  case 1: 
                       printf("Entre com o valor do primeiro elemento: ");
                       scanf("%d",&elem);    
                       insere_lista(&inicio, elem);
                          break;
                  case 2: consulta(inicio);
                          system("pause>null");
                          break;
                  case 3: 
                       printf("\n Digite a posicao a ser removida:");
                       scanf("%d",&pos);
                       elem=remover(pos, &inicio, inicio);
                       printf("\n Elemento Removido: %d", elem);
                       system("pause>null");                       
                       break;
                  case 4: exit(1);
           }
     }
}

int menu(){
    int op;
    system("cls");
    printf("Lista Encadeada");
    printf("\n 1. Insere");
    printf("\n 2. Consulta");
    printf("\n 3. Retira");
    printf("\n 4. Sai");
    printf("\n Escolha uma das opcoes abaixo: ");
    scanf("%d",&op);
    return op;
}


void insere_lista(struct no **inicio, int v){	
    struct no *novo;        
    novo = (struct no*) malloc(sizeof(struct no));
    novo->valor = v;
    if ( (*inicio) == NULL ){
       (*inicio) = novo;
       (*inicio)->prox = NULL;
    } else {
    	novo->prox = (*inicio);
	    (*inicio) = novo;	
     }
}

void consulta(struct no *lista){
	printf("\n Imprimindo a Lista Singularmente Encadeada \n");
	int i = 1;	
	while(lista != NULL) {
		printf("%d elemento da lista: %d \n", i, lista->valor);		
		lista=lista->prox;
		i++;
	}
}

int remover (int pos, struct no **olista, struct no *clista){
	struct no *aux = clista;
	int count = 0, elem;
	while( clista != NULL){
		count++;
		if (count == pos){
			if (count == 1){
				(*olista) = aux->prox;
			} else {
				clista->prox = aux->prox;
			}
			elem = aux->valor;
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
	return elem;
}
