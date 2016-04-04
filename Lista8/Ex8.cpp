#include <iostream.h>

void movetorre (int n, char orig, char dest, char aux);

int main(){
   int discos;
   cout << "\t\t\t\tTORRE DE HANOY\n\n";
   cout << "Digite a quantidade de discos: ";
   cin >> discos;
   movetorre(discos,'A','C','B');
   
   cout << "\n\n";
   system("pause");
   return 0;
}

void movetorre (int n, char orig, char dest, char aux){
   if (n==1){
             printf("\nMover disco 1 da torre %c para a torre %c", orig, dest);
   }else{
       movetorre(n-1,orig,aux,dest);
	   cout << "\nMover disco " << n << " da torre " << orig << " para a torre " << dest;
	   movetorre(n-1,aux,dest,orig);  
   }
};
