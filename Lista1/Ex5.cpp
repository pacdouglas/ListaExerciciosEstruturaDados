#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex5\n";
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
    
    int i, j, linhacoluna, k, matriz[MAX][MAX];
    
    cout << "\n Escolha a quantidade de linhas e colunas da sua Matriz: ";
    cin >> linhacoluna;
    while(linhacoluna>100 || linhacoluna<=0){
        cout << "\n Digite valores entre 0 e 100:";
        cin >> linhacoluna;    
    }
    
    cout << "\n Insira a constante que irá multiplicar a diagonal da matriz: ";
    cin >> k;
    
    cout<<"\n\n Insira os valores da matriz. Pressione ENTER\n";
    getch();
    
    for(i=0;i<linhacoluna;i++){    
        for(j=0;j<linhacoluna;j++){
            cout<<"\n"<<i+1<<"ª linha / "<<j+1<<"ª coluna: ";
            cin>>matriz[i][j];           
            if(i==j){
                matriz[i][j] = matriz[i][j]*k;        
            }
        }    
    }
    
    cout<<"\n\n Confira a matriz: ";
    for(i=0;i<linhacoluna;i++){
        cout<<"\n";
        for(j=0;j<linhacoluna;j++){
            cout<<" "<<matriz[i][j] << " | ";
        }
    }
    
    


getch();
}
