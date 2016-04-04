#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex3\n";
       cout << "================================================================================\n";
} 

float inserirNumeros(){
    int x;
    cout<<"\n Insira um número: ";
    cin>>x;
    return x;
}

float calcularMedia(float n1,float n2,float n3){
    float x;
    x=(n1+n2+n3)/3;
    return x;
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
    float n1,n2,n3,media;
    
    n1=inserirNumeros();
    n2=inserirNumeros();
    n3=inserirNumeros();
    
    media=calcularMedia(n1,n2,n3);
    cout<<"\n Média dos números: "<<media;
getch();
}

