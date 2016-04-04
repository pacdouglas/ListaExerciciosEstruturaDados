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

void imprimir(int num, int cp);

main(){
       setlocale(LC_ALL,"portuguese");

       int num;

       cout << "Digite um número: ";
       cin >> num;
       system("cls");

       imprimir(num, num-9);

       system("pause>NULL");
}

void imprimir(int num, int cp){

    if(num >= cp){
          cout << ", " << num;
          imprimir(num-1, cp);
          cout << ", " << num;
    }
}
