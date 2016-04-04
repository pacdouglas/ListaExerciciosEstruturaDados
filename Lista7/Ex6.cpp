#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct NO {
      char nome[30];
      char tel[30];
      char cpf[14];
      NO *prox;
};

void incluir(NO **inicio, NO **fim);
void consultar(NO *inicio);
void proximo(NO **inicio);


main(){
       setlocale(LC_ALL, "portuguese");

       NO *inicio = NULL, *fim = NULL;
       int opcao;

       do{
           system("cls");
           if(inicio == NULL){
                     cout << "Fila vazia !\n\n";
           }else{
                 cout << "Proximo da Fila: " << inicio->nome << "\n\n";
           }
           cout << "========================================\n";
           cout << "1 - Incluir na fila;\n";
           cout << "2 - Atender o próximo da fila;\n";
           cout << "3 - Consultar Fila;\n\n";
           cout << "4 - Sair;\n";
           cout << "========================================\n\n";
           cout << "Digite a opção desejada:";
           cin >> opcao;
           system("cls");

           switch(opcao){
                 case 1: incluir(&inicio, &fim);
                         break;
                 case 2: proximo(&inicio);
                         break;
                 case 3: consultar(inicio);
                         break;
                 case 4: exit(0);
                         break;

           }
       }while(opcao != 0);

}

void incluir(NO **inicio, NO **fim){
     NO *novo = NULL;

     novo = (NO *) malloc(sizeof(NO));

     cout << "Nome:";
     fflush(stdin);
     gets(novo->nome);
     cout << "Telefone: ";
     cin >> (novo->tel);
     cout << "CPF: ";
     cin >> (novo->cpf);

     if((*inicio) == NULL){
          (*inicio) = (*fim) = novo;
          (*inicio)->prox = NULL;
     }else{
          (*fim)->prox = novo;
          (*fim) = novo;
          (*fim)->prox = NULL;
     }
}

void consultar(NO *inicio){
     int i = 1;

     while(inicio != NULL){
             cout << "=============== " << i << "º da Fila ===============\n";
             cout << "Nome: " << inicio->nome <<"\n";
             cout << "Telefone: " << inicio->tel <<"\n";
             cout << "CPF: " << inicio->cpf <<"\n";
             inicio = inicio->prox;
             i++;
     }
     getch();
}

void proximo(NO **inicio){
     NO *aux;

     if((*inicio) == NULL){
          cout << "Fila vazia !\n";
     }else{
           aux = (*inicio);
           (*inicio) = (*inicio)->prox;
           free(aux);
     }
}
