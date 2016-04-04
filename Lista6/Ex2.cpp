#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

struct no{
    struct no *prox;
    int valor;
    struct no *ant;
};
void inserir(no **fim,no **novo);
void deletar(no **lista);
void inverter(no *inverter);
void tela();
void consultar(no *inicio);
       
main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
             
    struct no *inicio, *fim, *novo;
    int escolha;

    inicio=(no*) malloc(sizeof(no));
    inicio->ant=NULL;
    inicio->prox=NULL;
    cout<<"\n\n Insira o primeiro elemento da lista: ";
    cin>>inicio->valor;
    fim = novo = inicio;
    
    //menu
    do{
        system("cls");
        tela(); 
        cout<<"\n\n Escolha a opção para manipular a lista: ";
        cout<<"\n\n   1 - Inserir";
        cout<<"\n\n   2 - Deletar";
        cout<<"\n\n   3 - Exibir em ordem inversa";
        cout<<"\n\n   4 - Consultar um elemento";
        cout<<"\n\n                               5 - Sair";
        cin>>escolha;
        switch(escolha){
            case 1:
                inserir(&fim, &novo);
                break;
            case 2:
                deletar(&inicio);
                break;
            case 3:
                inverter(fim);
                break;
            case 4:
                consultar(inicio);
                break;
        }
        }while(escolha!=5);
}

void consultar(no *inicio){
    system("cls");
    tela();
    
    int elem, pos, i=1;
    bool existe=false;
    cout<<"Insira o elemento que deseja buscar: ";
    cin>>elem;
    
    while(inicio->prox !=NULL){
        if(inicio->valor==elem){
            existe=true;
            pos=i;
            break;
        }
        inicio=inicio->prox;
    i++;
    }
    if(inicio->valor==elem){
            existe=true;
            pos=i;
    }
    if(existe==false){
        cout<<"\n\n Elemento não existe na lista";
    }else{
        cout<<"\n\n Elemento encontrado.";
        cout<<"\n Posição da lista: "<<pos;
    }
    getch();
}

void inserir(no **fim,no **novo){
    system("cls");
    tela();
    
    int n, i=0;
    cout<<"\n\n Insira quantos elementos irá inserir: ";
    cin>>n;
    
    while(i!=n){
        i++;  
       (*novo) = (no*) malloc(sizeof(no));
	   (*fim)->prox=(*novo);
	   (*novo)->ant=(*fim);
	   (*novo)->prox=NULL;
	   (*fim)=(*novo);
	   cout<<"Entre com o novo valor: ";
	   cin>>(*novo)->valor;   
    }
    
}

void deletar(no **lista){
    system("cls");
    tela();
    
    no *aux = (*lista);
    no *anterior;
    int pos, count=0;
    cout<<"\n\n Insira a posição que deseja remover: ";
    cin>>pos;
    
    while(aux->prox != NULL){
        count ++;
        if(count==pos){
            if(count==1){
                (*lista)=aux->prox;
            }else{
                anterior=aux->ant;
                anterior->prox=aux->prox;
            }
            free(aux);
            break;
        } else{
            aux = aux->prox;
        }
    }
    
    
}

void inverter(no *fim){
    system("cls");
    tela();
    
    int i=1;
    
    while(fim->ant != NULL){
        cout<<"\n "<<i<<"º Valor Invertido: ";
        cout<<fim->valor<<"\n";
        fim=fim->ant;
        i++;   
    }
        cout<<"\n "<<i<<"º Valor Invertido: ";
        cout<<fim->valor<<"\n";
    getch();
    
}

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista6 - Ex2\n";
       cout << "================================================================================\n";
}
