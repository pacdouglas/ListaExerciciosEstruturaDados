#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <locale.h>
#include <iomanip>
#include <stdio.h>

using namespace std;


struct Calc{
    float Valor;
    struct Calc *prox;
};

void push(struct Calc **topo, float Valor);
float pop(struct Calc **topo);
float calcular(char Operador, float Valor1, float Valor2);
void refresh(struct Calc *topo);
int element(struct Calc *topo);
void gotoxy(int x, int y);

int main(){
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    char Valor[8], operador;
    float num, ValPop1, ValPop2;
    int condicao = 0;
    struct Calc *inicio = NULL;

    do{
        system("cls");
        refresh(inicio);
        gotoxy(1,3);
        gets(Valor);
        if(strcmp(Valor, "+") == 0 || strcmp(Valor, "-") == 0 || strcmp(Valor, "*") == 0 || strcmp(Valor, "/") == 0){
            if(element(inicio) == 0 || element(inicio) == 1){
                SetConsoleTextAttribute(hConsole, 12);
                gotoxy(15,20);
                cout << "Entre com 2 numeros para fazer algum calculo !";
                Sleep(3000);
            }else{
                ValPop1 = pop(&inicio);
                ValPop2 = pop(&inicio);
                operador = Valor[0];
                num = calcular(operador, ValPop1, ValPop2);
                push(&inicio, num);
            }
        }else{
            if(Valor[0] == 'Z' || Valor[0] == 'z'){
                inicio = NULL;
            }else{
                num = atof(Valor);
                push(&inicio, num);
            }
        }
    }while(condicao == 0);
    return 0;
}

void refresh(struct Calc *topo){
    gotoxy(1,1);
    while(topo != NULL){
        printf("%.2f ", topo->Valor);
        topo = topo->prox;
    }
}

int element(struct Calc *topo){
    int c = 0;
    gotoxy(1,1);
    while(topo != NULL){
        c++;
        topo = topo->prox;
    }
    return c;
}

void push(struct Calc **topo, float Valor){
    struct Calc *novo;
    novo = (struct Calc*) malloc(sizeof(struct Calc));
    novo->Valor = Valor;
    if((*topo) == NULL){
        (*topo) = novo;
        (*topo)->prox = NULL;
    }else{
        novo->prox = (*topo);
        (*topo) = novo;
    }
}

float pop(struct Calc **topo){
    struct Calc *aux;
    int Valor;
    aux = (*topo);
    Valor = aux->Valor;
    (*topo) = (*topo)->prox;
    free(aux);
    return Valor;
}

float calcular(char Operador, float Valor1, float Valor2){
    float Resultado;
    switch(Operador){
        case '+':
            Resultado = Valor1 + Valor2;
        break;
        case '-':
            Resultado = Valor1 - Valor2;
        break;
        case '*':
            Resultado = Valor1 * Valor2;
        break;
        case '/':
            Resultado = Valor1 / Valor2;
        break;
    }
    return Resultado;
}

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
