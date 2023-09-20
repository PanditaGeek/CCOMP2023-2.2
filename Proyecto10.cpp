#include <iostream>
#include <cmath>
using namespace std;

bool Primo(int n) {
  if(n <= 1){
    return false;
  }
  for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  long long suma = 0;
  for(int i = 2; i < 2000000; i++){
    if(Primo(i)){
      suma += i;
    }
  }
  cout << "La suma es: " << suma << endl;
  return 0;
}