#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#include <string.h>
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex7\n";
       cout << "================================================================================\n";
}

void inverterStr(char vet[]){
    char vetcopia[strlen(vet)];
    int i, j=strlen(vet);
    
    for(i=0;i<strlen(vet)+1;i++){
        vetcopia[i]=vet[j-1];
        --j;            
    }    
    
    for(i=0;i<strlen(vetcopia);i++){
        cout<<vetcopia[i];
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
    char vet[100];
    
    cout<<"\nInsira a String: ";
    gets(vet);
    
    cout<<"\n\n\n Confira a String invertida: ";
    inverterStr(vet);
    
    
getch();
}

