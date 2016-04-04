#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex4\n";
       cout << "================================================================================\n";
}

struct Alunos{
    char nome[20];
    char codigo[20];
    bool metProg;
    bool matApli;    
};

void inserirDados(Alunos dados[], int n){
    int i, t;
    cout<<"\n\n Insira os dados dos alunos: ";
    for(i=0;i<n;i++){
        cout<<"\n"<<" "<<i+1<<"º Aluno: "
        cout<<"\n Nome: ";
        fflush(stdin);
        gets(dados[i].nome);
        cout<<"\n Código: ";
        fflush(stdin);
        gets(dados[i].codigo);
        cout<<"\n Aluno cursa Métodos de programação(1 - Sim / 2 - Não): ";
        cin>>t;
        if(t==1){
            dados[i].metProg=true;
        }else{dados[i].metProg=false;}
        cout<<"\n Aluno cursa Matemática Aplicada(1 - Sim / 2 - Não): ";
        cin>>t;
        if(t==1){
            dados[i].matApli=true;
        }else{dados[i].matApli=false;}
    }    
}

void exibirAlunos(Alunos dados[], int n){
    int i;
    for(i=0;i<n;i++){
        if(dados[i].metProg==true && dados[i].matApli==true){
            cout<<"\n\n Nome: "<<dados[i].nome;
            cout<<"\n Código: "<<dados[i].codigo;
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
    Alunos dados[50];
    int n;
    cout<<"\n\n Insira quantos alunos irá inserir: ";
    cin>>n;
    inserirDados(dados, n);
    system("cls");
    tela();
    cout<<"\n\n Confira os dados dos alunos que cursam Metodos de Programação e Matemática aplicada simultaneamente: \n";
    exibirAlunos(dados, n); 
getch();
    
}
