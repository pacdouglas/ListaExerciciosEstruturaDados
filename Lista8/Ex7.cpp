#include <iostream.h>
#include <locale.h>

int calculaMDC (int n, int m);

main(){
       setlocale(LC_ALL,"portuguese");
       
       int n, m;
       
       cout << "Digite o primeiro número: ";
       cin >> n;
       cout << "Digite o segundo número: ";
       cin >> m;
       
       cout << calculaMDC(n, m);
       
       system("pause>null");
}

int calculaMDC (int n, int m){
    if((m <= n) && (n%m) == 0){
         return m;
    }else{
          if(n < m){
               return calculaMDC(m, n);
          }else{
                return calculaMDC(m, n%m);
          }
    }    
}
