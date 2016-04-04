#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex4\n";
       cout << "================================================================================\n";
}

void calcularArea(float b, float a){
    float area;
    area=(b*a)/2;
    cout<<"\n\n Area do triângulo: "<<area;
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
    float base, altura;
    
    cout<<"\n Insira a base do triângulo: ";
    cin>>base;
    cout<<"\n Insira a altura do triângulo: ";
    cin>>altura;
    
    calcularArea(base, altura);
getch();
}

