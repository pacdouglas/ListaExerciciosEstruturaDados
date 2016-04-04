#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex5\n";
       cout << "================================================================================\n";
}

void trocarValores(int a, int b, int c){
    int aux;
    
    if(b>a){
        aux=a;
        a=b;
        b=aux;
    }
    if(c>b){
        aux=b;
        b=c;
        c=aux;
    }
    if(b>a){
        aux=a;
        a=b;
        b=aux;
    }
    
    cout<<"\n Confira: \n"<<a<<"\n"<<b<<"\n"<<c;
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
    int a, b, c;
    
    cout<<"Insira o valor de A: ";
    cin>>a;
    cout<<"Insira o valor de B: ";
    cin>>b;
    cout<<"Insira o valor de C: ";
    cin>>c;
    
    trocarValores(a,b,c);
    
    
getch();
}

