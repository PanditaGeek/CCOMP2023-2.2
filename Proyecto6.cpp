#include <iostream>
using namespace std;

int main(){

  long long potencia1 = 0, suma1 = 0, suma2 = 0, potencia2 = 0, resta = 0;
  
  for(long long i = 1; i <= 100; i++){
    potencia1 = i*i;
    suma1 += potencia1;
  }
  
    suma2 += (100*101)/2;
    potencia2 = suma2 * suma2;
  

  cout << (potencia2 - suma1) << endl; 
  return 0;
}