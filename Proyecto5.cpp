#include <iostream>
using namespace std;

int main() {

  for (long long i = 2520;; i += 20) {
    bool divisible = true;
    for (int j = 1; j <= 20; j++) {
      if (i % j != 0) {
        divisible = false;
        break;
      }
    }
    if (divisible) {
      cout << i;
      return 0;
    }
  }
  return 0;
}