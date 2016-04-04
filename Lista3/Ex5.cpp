#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex5\n";
       cout << "================================================================================\n";
}

struct Clientes{
    char nome[20];
    char cpf[20];
    char codigo[20];
    float saldo;
    bool negativo;
};

void inserirDados(Clientes dados[], int n){
    int i, t;
    cout<<"\n\n Insira os dados dos clientes: ";
    for(i=0;i<n;i++){
        cout<<"\n"<<" "<<i+1<<"º Cliente: ";
        cout<<"\n Nome: ";
        fflush(stdin);
        gets(dados[i].nome);
        cout<<"\n Código: ";
        fflush(stdin);
        gets(dados[i].codigo);
        cout<<"\n CPF: ";
        fflush(stdin);
        gets(dados[i].cpf);
        cout<<"\n Saldo: ";
        cin>>dados[i].saldo;
        if(dados[i].saldo>0){
            dados[i].negativo=false;
        }else{dados[i].negativo=true;}
    }    
}

void exibirClientes(Clientes dados[], int n){
    int i;
    for(i=0;i<n;i++){
        if(dados[i].negativo==true){
            cout<<"\n\n Nome: "<<dados[i].nome;
            cout<<"\n Código: "<<dados[i].codigo;
            cout<<"\n CPF: "<<dados[i].cpf;
            cout<<"\n Saldo: "<<dados[i].saldo;
        }    
    }    
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();
    Clientes dados[50];
    int n;
    cout<<"\n\n Insira quantos clientes irá inserir: ";
    cin>>n;
    inserirDados(dados, n);
    system("cls");
    tela();
    cout<<"\n\n Confira os clientes em saldo negativo: \n";
    exibirClientes(dados, n); 
getch();
    
}
