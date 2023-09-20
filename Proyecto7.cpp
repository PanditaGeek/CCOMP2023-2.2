#include <iostream>
using namespace std;

bool Primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;
    while (count < 10001) {
        if (Primo(num)) {
            count++;
        }
        if (count == 10001) {
            break;
        }
        num++;
    }
    cout << num << endl;
    return 0;
}