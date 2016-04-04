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

int fatorial(int num);

main()
{
       setlocale(LC_ALL, "portuguese");
       int num, resultado = 0;

       cout << "Digite um número para calcular o fatorial: ";
       cin >> num;
       system("cls");

       resultado = fatorial(num);

       cout << "Fatorial de " << num << " = " << resultado << "\n\n";

       system("pause>NULL");
}

int fatorial(int num)
{
        if(num <= 1)
            return num;
        else
            return (num * (fatorial(num-1)));
}
