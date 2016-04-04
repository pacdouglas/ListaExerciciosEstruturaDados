#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>

void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex1\n";
       cout << "================================================================================\n";
}
       
main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();                 
       int Vet[10], i, Soma=0;
       float Media;
       
       cout<<"Insira 10 valores positivos e inteiros: \n";
       for(i=0;i<10;i++){
                         cout<<i+1<<"º Valor: ";
                         cin>>Vet[i];
                         while(Vet[i]<0){
                                         cout<<"Insira apenas valores positivos!\n";
                                         cout<<i+1<<"º Valor: ";
                                         cin>>Vet[i];
                         }
                         Soma=Soma+Vet[i];
       }
       Media = Soma/10.0;
       cout<<"A media dos numeros foi de: "<<Media<<"\n\n";
getch();
}
