#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2a - Ex1\n";
       cout << "================================================================================\n";
}

void calcular(float lado, float *area, float *perimetro){
*area=lado * lado;
*perimetro=lado*4;    
}
      
main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
    float lado, area, perimetro;
    printf("\n\n Insira o lado do quadrado: ");
    cin>>lado;
    calcular(lado,&area,&perimetro);
    cout<<"\n\n\n\n Lado: "<<area<<"\n\n Perimetro: "<<perimetro;
       
getch();
}
