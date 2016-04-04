#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex2\n";
       cout << "================================================================================\n";
}


float converterCelsius(float tempC){
    float t;
    t = (9/5)*tempC+32;
    return t;
}      

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
    float tempC, tempF;
    
    cout<<"\n\n Insira a Temperatura em Celsius: ";
    cin>>tempC;
    
    cout<<"\n Pressione qualquer tecla para converter em Farenheit.";
    getch();
    
    tempF=converterCelsius(tempC);
    cout<<"\n\n Temperatura em Farenheit: "<<tempF; 
getch();
}

