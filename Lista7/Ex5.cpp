

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct no{
       no *prox;
       int val;
};

void insere(no **i,no **f, int elem);
void consulta(no *i);
int retira(no **i);
int menu();

int main(){
    no *inicio=NULL, *fim=NULL;
    int opcao=0, elem;
    while (opcao!=4){
        opcao=menu();
        switch (opcao){
            case 1: printf("Digite o valor a ser inserido: ");
                    scanf("%d",&elem);
                    insere(&inicio,&fim, elem);
                    break;
            case 2:
                    consulta(inicio);
                    break;
            case 3:
                    elem=retira(&inicio);
                    if (elem!=-1) printf("\n Elemento Retirado = %d ", elem);
                    system("pause>null");
                    break;
            case 4: exit(1);
        }
    }
}

int menu(){
    int op;
    system("cls");
    printf("Fila \n\n");
    printf("1. Insere\n");
    printf("2. Consulta\n");
    printf("3. Retira\n");
    printf("4. Sai\n");
    printf("Digite uma opcao: ");
    scanf("%d",&op);
    return op;
}

int retira(no **i){
    int elem;
    if ((*i)==NULL) {
       return 0;
    }else{
      elem = (*i)->val;
      (*i) = (*i)->prox;
      return elem;
    }
}

void insere(no **i,no **f, int elem){
    no *novo;
    novo=(no *) malloc(sizeof(no));
    novo->val=elem;
    if ((*f)==NULL){
        (*f)=(*i)=novo;
        (*f)->prox=NULL;
    } else{
        (*f)->prox=novo;
        (*f)=novo;
        (*f)->prox=NULL;
    }
}

void consulta(no *i){
    if (i==NULL){
        printf("Fila vazia");
    }else{
        do{
               printf("%d ", i->val);
               i=i->prox;
        }while (i!=NULL);
    }
    system("pause>null");
}
