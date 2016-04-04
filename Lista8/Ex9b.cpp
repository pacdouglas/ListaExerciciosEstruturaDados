#include <iostream.h>
#include <locale.h>

void fibonacci(int n);

main(){
       setlocale(LC_ALL, "portuguese");
       
       int n;
       
       cout << "Digite a quantidade de números: ";
       cin >> n;
       
       fibonacci(n);
       
       system("pause");
}

void fibonacci(int n){
    int soma[100] = {0};
    soma[1] = 1;
    
    cout << soma[0] << " " << soma[1] << " ";
    
    for(int i=2; i < n; i++){
          soma[i] = soma[i-1] + soma[i-2];
          cout << soma[i] << " ";
    }
}
