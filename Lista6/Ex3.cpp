#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>

struct no{
    struct no *prox;
    char nome[15];
};
       
main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
             
    struct no *inicio, *fim, *novo;
    struct no *inicio2, *fim2, *novo2;
    struct no *inicio3, *fim3, *novo3;
    int escolha;

    inicio=(no*) malloc(sizeof(no));
    inicio->prox=NULL;
    cout<<"\n\n Insira o primeiro nome da lista1[Máximo 15 caracteres]: ";
    fflush(stdin);
    gets(inicio->nome);
    fim = novo = inicio;
    
    int qtd;
    cout<<"\n Quantos nomes mais deseja inseria na lista1?";
    cin>>qtd;
    
    for(int i=0;i<qtd;i++){
        novo=(no*) malloc(sizeof(no));
        fim->prox=novo;
        novo->prox=NULL;
        cout<<" \n Insira o nome para Lista1: ";
        fflush(stdin);
        gets(novo->nome);
        fim=novo;    
    }
    
    for(int i=0;i<qtd+1;i++){
        cout<<"\n\n"<<inicio->nome;
        inicio=inicio->prox;
    }
    
getch();    
}


void tela(){
       cout << "================================================================================";
       cout << "                                  Lista6 - Ex3\n";
       cout << "================================================================================\n";
}
