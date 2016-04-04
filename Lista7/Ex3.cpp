#include <iostream>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct NO {
      char letra;
      NO *prox;
};

void push(char letra, NO **topo);
void InverterFrase(char frase[], NO *topo);

main(){
       setlocale(LC_ALL, "portuguese");
       char frase[100];

       NO *topo = NULL;

       cout << "Digite uma frase: ";
       gets(frase);

       InverterFrase(frase, topo);

}

void push(char letra, NO **topo){
       NO *novo;

       novo = (NO *) malloc(sizeof(NO));
       novo->letra = letra;

       if((*topo) == NULL){
            (*topo) = novo;
       }else{
             novo->prox = (*topo);
             (*topo) = novo;
       }
}

void InverterFrase(char frase[], NO *topo){
       int i;

       for(i = 0; i < strlen(frase); i++){
             push(frase[i], &topo);
       }

       cout << "\nFrase invertida: ";
       while(topo != NULL){
               cout << topo->letra;
               topo = topo->prox;
       }

       getch();
}
