#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex7\n";
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
    
    int i, j, linha, coluna, matriz[MAX][MAX];
    
    bool verif=true;
    
    cout << "\n Escolha a quantidade de linhas da sua Matriz: ";
    cin >> linha;
    while(linha>100 || linha<=0){
        cout << "\n Digite valores entre 0 e 100:";
        cin >> linha;    
    }
    
    cout << "\n Escolha a quantidade de colunas da sua Matriz: ";
    cin >> coluna;
    while(coluna>100 || coluna<=0){
        cout << "\n Digite valores entre 0 e 100:";
        cin >> coluna;    
    }
    
   
    cout<<"\n\n Insira os valores da matriz. Pressione ENTER\n";
    getch();
    
    for(i=0;i<linha;i++){    
        for(j=0;j<coluna;j++){
            cout<<"\n"<<i+1<<"ª linha / "<<j+1<<"ª coluna: ";
            cin>>matriz[i][j];
            if(i==j && matriz[i][j]!=1){
                verif=false;
            }           
        }    
    }
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            if(i!=j && matriz[i][j]!=0){
                verif=false;
            }
        }    
    }
    
    if(verif==true){
        cout<<"\n Sua matriz é unitária.";    
    }else{cout<<"\n Sua matriz não é unitária.";}

getch();
}
