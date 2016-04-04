#include <iostream>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct no
{
    char a;
    struct no *prox;
};
bool push(char p[]);

bool verif(char p[], no *t);

main()
{
    setlocale(LC_ALL, "portuguese");
    char palavra[100];

    cout<<"Insira a palavra para verificar se ela é palíndroma: ";
    gets(palavra);

    if(push(palavra)==true)
        cout<<"\n\n Palíndroma!";
    else
        cout<<"\n\n Não palíndroma!";

    getch();
}

bool verif(char p[], no *t)
{
    bool v=true;

    for(int i=0; i<strlen(p); i++)
    {
        if(p[i]!=t->a)
        {
            v=false;
        }
        t=t->prox;
    }
    return v;
}

bool push(char p[])
{
    no *topo=NULL, *aux;
    for(int i=0; i<strlen(p);i++)
    {
        aux = (no*)malloc(sizeof(no));
        aux->a = p[i];
        if(topo==NULL)
        {
            topo = aux;
            topo->prox = NULL;
        }
        else
        {
            aux->prox=topo;
            topo=aux;
        }
    }
    return verif(p, topo);
}

