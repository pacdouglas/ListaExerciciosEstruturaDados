#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex2\n";
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
       int N, pares=0, impares=0, Vet[MAX], i;
       
       cout<<"Escolha quantos numeros inteiros deseja inserir: ";
       cin>>N;
       while(N<=0 && N<MAX){
                   cout<<"\n\nDigite apenas números positivos";
                   cin>>N;
       }
       
       for(i=0;i<N;i++){                
                        do{
                          cout<<"\nInsira o "<<i+1<<"º número positivo e inteiro: ";
                          cin>>Vet[i];                                       
                        }
                        while(Vet[i]<0);
                        
                        if(Vet[i]%2==0){
                                       pares++;
                        }else{
                              impares++;
                        }
       }
    cout<<"Você digitou "<<pares<<" numeros pares.";
    cout<<"\nVocê digitou "<<impares<<" numeros impares.\n\n";
    getch();
}
