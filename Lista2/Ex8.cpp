#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <string.h>
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex8\n";
       cout << "================================================================================\n";
}

void LeVetor(int vet[]){
    int i;
    cout<<"Insira 5 números inteiros: ";
    for(i=0;i<5;i++){
            cout<<"\n"<<i+1<<"º número: ";
            cin>>vet[i];
    }    
}

void MultiplicaVetor(int vet[],int novoVet[]){
    int i, n;
    cout<<"\n\nInsira o valor que deseja multiplicar o vetor: ";
    cin>>n;
    for(i=0;i<5;i++){
        novoVet[i]=vet[i]*n;    
    }
}

void EscreveVetor(int novoVet[]){
    int i;
    cout<<"\n\nConfira os novos valores: ";    
    for(i=0;i<5;i++){
        cout<<"\n"<<novoVet[i];
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
    int vet[5], novoVet[5];
    
    LeVetor(vet);
    
    MultiplicaVetor(vet, novoVet);
    
    EscreveVetor(novoVet);
getch();
}

