#include <iostream.h>
#include <locale.h>

int fibonacci(int n);

main(){
       setlocale(LC_ALL, "portuguese");   
       
       int n;
       
       cout << "Digite qual posi��o sequ�ncia de fibonacci: ";
       cin >> n;
       
       cout << fibonacci(n);
       
       system("pause");    
}

int fibonacci(int n){
     if(n == 0 || n == 1){
          return n;
     }else{
           return fibonacci(n-2) + fibonacci(n-1);
     }
}
