#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex1\n";
       cout << "================================================================================\n";
}

struct Pessoa{
    char nome[20];
    char sobrenome[20];
    int idade;
    char rg[10];
    float salario;    
};

Pessoa inserirdados(){
        Pessoa temp;
        cout<<"\n Nome: ";
        cin>>temp.nome;
        cout<<"\n Sobrenome: ";
        cin>>temp.sobrenome;
        cout<<"\n Idade: ";
        cin>>temp.idade;
        cout<<"\n RG: ";
        cin>>temp.rg;
        cout<<"\n Salário: ";
        cin>>temp.salario;
return temp;
}

void aumentosalario(Pessoa dados){
float nsalario;
nsalario = (dados.salario*20/100)+dados.salario;
cout<<"\n Pessoa com mais de 40 anos, novo salário com aumento de 20%: "<<nsalario;    
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();
    Pessoa dados;

    cout<<"Insira os dados dessa pessoa.\n";
    dados = inserirdados();
    if(dados.idade>40){
        aumentosalario(dados);       
    }else{
        cout<<"\n\n Pessoa com menos de 40 anos. Não recebe aumento.";
    }
getch();
    
}
