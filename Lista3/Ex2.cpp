#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex2\n";
       cout << "================================================================================\n";
}

struct Pessoa{
    char nome[20];
    char sobrenome[20];
    int idade;
    char rg[10];
    float salario;    
};

void aumentosalario(Pessoa dados[], int i){
float nsalario;
nsalario = (dados[i].salario*20/100)+dados[i].salario;
cout<<"\n Pessoa com mais de 40 anos, novo salário com aumento de 20%: "<<nsalario;    
}

void inserirdados(Pessoa dados[], int n){
        int i;
        cout<<"Insira os dados: ";
        for(i=0;i<n;i++){
            cout<<"\n "<<i+1<<"ª pessoa: ";
            cout<<"\n Nome: ";
            cin>>dados[i].nome;
            cout<<"\n Sobrenome: ";
            cin>>dados[i].sobrenome;
            cout<<"\n Idade: ";
            cin>>dados[i].idade;
            cout<<"\n RG: ";
            cin>>dados[i].rg;
            cout<<"\n Salário: ";
            cin>>dados[i].salario;
            if(dados[i].idade>40){
                aumentosalario(dados,i);       
                }else{
                    cout<<"\n\n Pessoa com menos de 40 anos. Não recebe aumento.";
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
    Pessoa dados[50];
    int n;

    cout<<"Insira a quantidade de pessoas que será inserida: ";
    cin>>n;
    inserirdados(dados, n);
    
    
getch();
    
}
