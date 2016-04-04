#include <iostream.h>
#include <conio.h>
#include <locale.h>
#include <iomanip>
#define MAX 100
void tela(){
       cout << "================================================================================";
       cout << "                                  Lista3 - Ex6\n";
       cout << "================================================================================\n";
}

struct Prova{
char questao;
};

struct Aluno{
    char nome[20];
    int numero;
    float nota;
    Prova provaAluno;     
};

void criarGabarito(Prova gabarito[]){
    int i;
    cout<<"\n\n Insira a resposta correta das questões que variam de 'a' até 'e'";
    for(i=0;i<10;i++){
        do{
        cout<<"\nQuestão "<<i+1<<": ";
        cin>>gabarito[i].questao;
        }while(gabarito[i].questao!='a' 
                && gabarito[i].questao!='b' 
                && gabarito[i].questao!='c' 
                && gabarito[i].questao!='d' 
                && gabarito[i].questao!='e');
    }  
}

void calcularNotas(Aluno dados[], Prova gabarito[], int n, int i){
    int j;
    dados[i].nota=0;
    for(j=0;j<10;j++){
        do{
        cout<<"\nQuestão "<<j+1<<": ";
        cin>>dados[i].provaAluno.questao;
        }while(dados[i].provaAluno.questao!='a' 
                && dados[i].provaAluno.questao!='b' 
                && dados[i].provaAluno.questao!='c' 
                && dados[i].provaAluno.questao!='d' 
                && dados[i].provaAluno.questao!='e');
                
        if(dados[i].provaAluno.questao==gabarito[j].questao){
            dados[i].nota++;
        }    
    }
}

void inserirAlunos(Aluno dados[], Prova gabarito[], int n){
    int i;
    cout<<"\n Insira os dados dos alunos. Pressione qualquer tecla";
    getch();
    for(i=0;i<n;i++){
        system("cls");
        tela();
        cout<<"\n\n "<<i+1<<"º aluno.\n Nome: ";
        cin>>dados[i].nome;
        cout<<"\n Número: ";
        cin>>dados[i].numero;
        if(i==n-1){
            cout<<"\n Último aluno necessáriamente recebe o número 9999, alteração efetuada.";
            dados[i].numero=9999;
        }
        dados[i].nota=0;
        cout<<"\n   Insira as respostas do aluno.";
        
        calcularNotas(dados,gabarito,n,i);       
    } 
}

float exibirNotas(Aluno dados[],int n){
    int i, qtdAprovados=0;
    float media;
    system("cls");
    tela();
    cout<<"\n\n Dados e notas dos alunos: ";
    for(i=0;i<n;i++){
        cout<<"\n\n "<<i+1<<"º aluno: \n";
        cout<<"Nome: "<<dados[i].nome<<" | Número: "<<dados[i].numero<<"\n Nota: "<<dados[i].nota;
        if(dados[i].nota>=5){
            qtdAprovados++;
        }
    }
    media=qtdAprovados*100/n;
    return media;
} 

float notaFreq(Aluno dados[],int n){
    int i,j, verif, maior=0, indice;
    float temp[n];
    
    for(i=0;i<n;i++){
        verif=1;
        for(j=i+1;j<n-1;j++){
            if(dados[i].nota==dados[j].nota){
                verif++;
                temp[i]=dados[i].nota;
            }
        }
        if(verif>maior){
            maior=verif;
            indice=i;
        }
    }
    
    return dados[indice].nota;
}   

main(){
//Personalização de Cor
system("color 17");
//Configurando Idioma
setlocale(LC_ALL, "Portuguese");
system("cls");
//Inicio
tela();
    Prova gabarito[10];
    Aluno dados[50];
    int n;
    float percent, notaFrequente;
    
    criarGabarito(gabarito);
    
    system("cls");
    tela();
    cout<<"\n\n Insira a quantidade de alunos: ";
    cin>>n;
    
    inserirAlunos(dados, gabarito, n);
    
    percent = exibirNotas(dados, n);
    cout<<"\n\n  "<<percent<<"% dos alunos foram aprovados.";
    
    notaFrequente=notaFreq(dados,n);
    cout<<"\n  Nota mais frequênte: "<<notaFrequente;   
getch();
    
}
