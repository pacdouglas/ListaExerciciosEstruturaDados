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

void calcular(int num, int *soma);

main(){
       setlocale(LC_ALL,"portuguese");

       int num, soma=0;

       cout << "Digite um número: ";
       cin >> num;
       calcular(num, &soma);
       cout << "\n\nSoma: " << soma << endl;

       system("pause");
}

void calcular(int num, int *soma){

     if(num != 0){
         cout << num << " + ";
         *soma += + num;
         calcular(num-1, soma);
         cout << num << " + ";
         *soma += num;
     }
}
