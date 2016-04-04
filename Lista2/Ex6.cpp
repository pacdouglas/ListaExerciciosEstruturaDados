#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <string.h>
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex6\n";
       cout << "================================================================================\n";
}

void deletarCaracter(char vet[100], char m){
    int i;
    char vazio=' ';

    for(i=0;i<strlen(vet);i++){
        if(vet[i]==m){
            vet[i]=vazio;    
        }     
    }
    cout<<"\n Confira o vetor: \n\n";
    for(i=0;i<strlen(vet);i++){
        cout<<vet[i];
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
    char vet[100], m;
    
    cout<<"\n\n Insira o vetor: ";
    gets(vet);
    cout<<"\n Insira o caracter a ser excluído do vetor: ";
    cin>>m;
    
    deletarCaracter(vet, m);
    
getch();
}

