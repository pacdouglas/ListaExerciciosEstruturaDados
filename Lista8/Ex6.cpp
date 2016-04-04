#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void imprimir(int num);

main(){
       setlocale(LC_ALL,"portuguese");
       
       int num;
       
       cout << "Digite um número inteiro: ";
       cin >> num;
       
       imprimir(num);
       
       cout << "\n\n";
       
       system("pause");
}

void imprimir(int num){
     if(num != 0){
          cout << num << ", ";
          imprimir(num-1);
          cout << (num*2) << ", ";
     }     
}
