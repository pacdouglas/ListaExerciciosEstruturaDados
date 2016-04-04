#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <locale.h>
#include <iomanip>

using namespace std;

struct no{
	int valor;
	struct no *prox;
};

void incluirPilha(no **t, int elem);
void consultaPilha(no *t);
void retiraPilha(no **t);
int menu();

int main()
{
    setlocale(LC_ALL, "Portuguese");
	no *topo=NULL;
	int opc=0, elem;
	do
    {
        opc = menu();
        switch(opc)
        {
        case 1:
            cout<<"\n\n Escolha o valor a ser inserido: ";
            cin >> elem;
            incluirPilha(&topo, elem);
            break;
        case 2:
            consultaPilha(topo);
            break;
        case 3:
            retiraPilha(&topo);
            break;
        default:
            cout<<"Opção inválida! Pressione ENTER";
        }
	}while(opc!=4);
	return 0;
}

int menu()
{
    int o;
	system("cls");
	cout << "\n\n Insira a opção";
	cout << "\n 1 - Inserir Pilha";
	cout << "\n 2 - Consultar Pilha";
	cout << "\n 3 - Retirar da Pilha";
	cout << "\n 4 - Sair \n\n";
	cin>>o;
	return o;
}
void incluirPilha(no **t, int elem)
{
    no *novo;
    novo =(no*) malloc(sizeof(no));
    novo->valor = elem;
    if((*t)==NULL)
    {
       (*t)=novo;
       (*t)->prox=NULL;
    }else
    {
        novo->prox=(*t);
        (*t)=novo;
    }
}
void consultaPilha(no *t)
{
    if(t==NULL)
    {
        cout<<"\n\n Pilha vazia!";
    }else
    {
        do
        {
            cout<<"\n"<<t->valor;
            t=t->prox;
        }while(t!=NULL);
    }getch();
}
void retiraPilha(no **t)
{
    if((*t)==NULL)
    {
        cout<<"Pilha vazia!";
        getch();
    }else
    {
        cout<<"\n\n Elemento retirado: "<<(*t)->valor;
        no *aux = (*t);
        (*t)=(*t)->prox;
        free(aux);
        cout<<"\n Confira a pilha";
        consultaPilha((*t));
    }
}
