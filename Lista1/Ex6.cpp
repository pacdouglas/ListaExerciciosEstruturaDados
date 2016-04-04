#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista1 - Ex6\n";
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
    
    int i, j, linhacoluna, matriz[MAX][MAX], matriz1[MAX][MAX], verif=0;
    
    cout << "\n Escolha a quantidade de linhas e colunas das suas Matrizes: ";
    cin >> linhacoluna;
    while(linhacoluna>100 || linhacoluna<=0){
        cout << "\n Digite valores entre 0 e 100:";
        cin >> linhacoluna;    
    }

    cout<<"\n\n Insira os valores da primeira matriz. Pressione ENTER\n";
    getch();
    
    for(i=0;i<linhacoluna;i++){    
        for(j=0;j<linhacoluna;j++){
            cout<<"\n"<<i+1<<"ª linha / "<<j+1<<"ª coluna: ";
            cin>>matriz[i][j];           
        }    
    }
    
    system("cls");
    tela();
    
    cout<<"\n\n Insira os valores da segunda matriz. Pressione ENTER\n";
    getch();
    
    for(i=0;i<linhacoluna;i++){    
        for(j=0;j<linhacoluna;j++){
            cout<<"\n"<<i+1<<"ª linha / "<<j+1<<"ª coluna: ";
            cin>>matriz1[i][j];
            if(matriz[i][j]==matriz1[i][j] && i==j){
            verif++;    
            }           
        }    
    }

    if(verif==linhacoluna){
        cout<<"\n\n Todos os valores da diagonal das matrizes são iguais";    
    }else{
        cout<<"\n\n Os valores da diagonal das matrizes são diferentes";
    }
getch();
}
