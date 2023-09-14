#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese cantidad de números de Fibonacci: ";
    cin >> numero;

    int n1 = 0;
    int n2 = 1;
    int suma;

    for(int c = 1; c <= numero; c++){
      cout << n1 << " ";
      suma = n1;
      n1 = n2;
      n2 += suma; 
    }

    
  
    return 0;
}
