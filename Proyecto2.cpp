#include <iostream>
using namespace std;

bool par(int n){
  return (n % 2 == 0);
}

long long suma(int max){
  int x1 = 0, x2 = 1, f3;
  long long suma = 0;

  while (f3 < max) {
    if (par(f3)){
      suma += f3;
    }
      f3 = x1 + x2;
      x1 = x2;
      x2 = f3;
  }

  return suma;
}

int main() {
  long long fibonacciPares = suma(4000000);
  cout << fibonacciPares << endl;
  return 0;
}