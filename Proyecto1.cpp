#include <iostream>
using namespace std;

int main() {
  int suma = 0; 
  for(int i = 3; i < 1000; i++){
    if((i%5 == 0) || (i%3 == 0)){
      suma += i;
    }
  }
  cout << suma << endl;
  return 0;
}