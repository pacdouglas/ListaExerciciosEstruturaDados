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

int calcular(int base, int exp);

main(){
       setlocale(LC_ALL,"portuguese");
       int base, exp;

       cout << "Digite a base: ";
       cin >> base;
       cout << "Digite o expoente: ";
       cin >> exp;

       cout << calcular(base, exp);

       system("pause>NULL");
}

int calcular(int base, int exp){
      if(exp == 0){
           return 1;
      }else{
            if(exp > 0){
                 base = (base*calcular(base, exp-1));
            }
      }
      return base;
}
