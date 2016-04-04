#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex3\n";
       cout << "================================================================================\n";
}

struct Vendedores{
    char nome[20];
    char codigo[20];
    float salario;
    float totalvendas;    
};

void verifBonificacao(Vendedores dados[], int i){
    float bonificacao=0;
    if(dados[i].totalvendas>=500 && dados[i].totalvendas<1000){
            bonificacao = dados[i].salario*5/100;
    }
    if(dados[i].totalvendas>=1000 && dados[i].totalvendas<1500){
            bonificacao = dados[i].salario*5/100;
    }
    if(dados[i].totalvendas>=1500){
            bonificacao = dados[i].salario*5/100;
    }
    cout<<"\n Esse vendedor receberá de bonificação: R$"<<bonificacao;
}

void inserirDados(Vendedores dados[], int n){
        int i;
        cout<<"Insira os dados: ";
        for(i=0;i<n;i++){
            cout<<"\n\n "<<i+1<<"ª vendedor: ";
            cout<<"\n Nome: ";
            cin>>dados[i].nome;
            cout<<"\n Código: ";
            cin>>dados[i].codigo;
            cout<<"\n Total de vendas: R$";
            cin>>dados[i].totalvendas;
            cout<<"\n Salário: ";
            cin>>dados[i].salario;
                verifBonificacao(dados,i);  
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
    Vendedores
     dados[50];
    int n;

    cout<<"Insira a quantidade de vendedores: ";
    cin>>n;
    inserirDados(dados, n);
    
    
getch();
    
}
