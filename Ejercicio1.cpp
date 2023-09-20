#include <iostream>
using namespace std; 

int main() {
  int numero;
  cout << "Ingrese hasta que número imprimir primos: ";
  cin >> numero;

  for(int c = 1; c <= numero; c++){
    if((c%2!=0)&&(c%3!=0)&&(c%5!=0)&&(c%5!=0)){
      cout << c << " ";
    }
  }
}
