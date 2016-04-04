#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex3\n";
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
       int N, Vet[MAX], i, j, aux;
       
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
       }
       
       for(i=0;i<N;i++){
                        
                        for(j=i+1;j<N;j++){
                                           if(Vet[j]<Vet[i]){
                                           aux=Vet[i];
                                           Vet[i]=Vet[j];
                                           Vet[j]=aux;
                                           }
                        }               
       }
       
       cout<<"Confira seu vetor organizado em ordem crescente: ";
       for(i=0;i<N;i++){
                        cout<<"\n"<<Vet[i];                
       }
       cout<<"\n";
    getch();
}
