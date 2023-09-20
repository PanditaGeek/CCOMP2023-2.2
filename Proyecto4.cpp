#include <iostream>
using namespace std;

bool Palindromo(int n){
  string cadn = to_string(n);
  int i = 0, j = cadn.length() - 1;
  while(i < j){
    if(cadn[i] != cadn[j]){
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main() {
  int mayor;
  for(int i = 100; i < 1000; i++){
    for(int j = 100; j < 1000; j++){
      int mult = i * j;
      if(Palindromo(mult) && mult > mayor){
        mayor = mult;
      }
    }
  }
  cout << mayor << endl;
  return 0;
}