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

int somaDez(int num);

main()
{
       setlocale(LC_ALL, "portuguese");

       cout << "Soma dos 10 primeiros números: "<<somaDez(10);
}

int somaDez(int num)
{
            if(num==0)
                return num;
            else
            return (num + somaDez((num-1)));
}