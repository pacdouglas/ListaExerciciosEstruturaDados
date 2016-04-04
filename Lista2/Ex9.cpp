#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista2 - Ex9\n";
       cout << "================================================================================\n";
}

int inserirNotas(float notas[]){
    int n, i;
    cin>>n;
    
    cout<<"\n\n Insira as notas: ";
    for(i=0;i<n;i++){
        cout<<"\n"<<i+1<<"ª nota: ";
        cin>>notas[i];
    }    
    return n;
}

void exibirNotas(float notas[], int qtdNotas){
    int i;
    for(i=0;i<qtdNotas;i++){
    cout<<"\n"<<" "<<i+1<<"ª nota: "<<notas[i];    
    }
    getch();    
}

void exibirMedia(float notas[], int qtdNotas){
    int i;
    float media, soma=0, n;
    for(i=0;i<qtdNotas;i++){
        soma=soma+notas[i];
    }
    n = qtdNotas;
    media = soma/n;
    cout<<"\n\n A média de todas as notas foi de: "<<media;    
    getch();
}

void porcentMaior5(float notas[], int qtdNotas){
    int i;
    float qtd=0, percent, n=qtdNotas;
    for(i=0;i<qtdNotas;i++){
        if(notas[i]>=5)
        qtd++;
    }
    percent=(qtd*100)/n;
    cout<<"\n\n  "<<percent<<"% dos alunos tiraram nota superior ou igual a 5.";
    getch();
}

void porcentMenor5(float notas[], int qtdNotas){
    int i;
    float qtd=0, percent, n=qtdNotas;
    for(i=0;i<qtdNotas;i++){
        if(notas[i]<5)
        qtd++;
    }
    percent=(qtd*100)/n;
    cout<<"\n\n  "<<percent<<"% dos alunos tiraram nota inferior a 5.";
    getch();
}

void porcentNota0(float notas[], int qtdNotas){
    int i;
    float qtd=0, percent, n=qtdNotas;
    for(i=0;i<qtdNotas;i++){
        if(notas[i]==0)
        qtd++;
    }
    percent=(qtd*100)/n;
    cout<<"\n\n  "<<percent<<"% dos alunos tiraram nota 0.";
    getch();
}

void maiorMenor(float notas[], int qtdNotas){
    int i;
    float maior=0, menor=10;
    for(i=0;i<qtdNotas;i++){
        if(notas[i]>maior)
            maior=notas[i];
        if(notas[i]<menor)
            menor=notas[i];
    }
    cout<<"\n\n Maior nota: "<<maior<<"\n Menor nota: "<<menor; 
    getch();   
}

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();
    float notas[MAX];
    int escolha, qtdNotas;
    
    cout<<"\n Insira a quantidade de notas: ";
    qtdNotas=inserirNotas(notas);

    //Menu
    do{
        system("cls");
        tela();
        cout<<"\n\n                              Escolha uma opção";
        cout<<"\n     1 - Exibir notas                                 2 - Exibir média";
        cout<<"\n     3 - % notas maior 5                              4 - % notas menor 5"; 
        cout<<"\n     5 - Maior e menor nota                           6 - % de notas 0";
        cout<<"\n\n                                                      0 - Sair       ";   
        cin>>escolha;
        
        switch(escolha){
            case 1:
                exibirNotas(notas, qtdNotas);
                break;
            case 2:
                exibirMedia(notas, qtdNotas);
                break;
            case 3:
                porcentMaior5(notas, qtdNotas);
                break;
            case 4:
                porcentMenor5(notas, qtdNotas);
                break;
            case 5:
                maiorMenor(notas, qtdNotas);
                break;
            case 6:
                porcentNota0(notas, qtdNotas);
                break;
        }
    }while(escolha!=0);
}
