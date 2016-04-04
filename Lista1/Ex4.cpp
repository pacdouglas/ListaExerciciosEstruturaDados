#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex4\n";
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
       int N, Vet[MAX], i, menor;
       
       cout<<"Escolha quantos numeros inteiros deseja inserir: ";
       cin>>N;
       while(N<=0 && N<MAX){
                   cout<<"\n\nDigite apenas números positivos";
                   cin>>N;
       }
       
       for(i=0;i<N;i++){                
                          cout<<"\nInsira o "<<i+1<<"º número: ";
                          cin>>Vet[i];                                                        
       }
       menor=Vet[0];
       for(i=1;i<N;i++){
                        if(Vet[i]<menor){
                                         menor=Vet[i];
                        }
       }
       
       cout<<"O menor número digitado foi: "<<menor<<"\n\n";
    getch();
}
