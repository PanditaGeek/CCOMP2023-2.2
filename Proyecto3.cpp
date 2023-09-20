#include <iostream>
using namespace std;

long long primomayor(long long n) {
    long long mayor = n;

    while (n % 2 == 0) {
        mayor = 2;
        n /= 2;
    }

    for (long long i = 3; i <= n/2; i += 2) {
        while (n % i == 0) {
            mayor = i;
            n /= i;
        }
    }

    if (n > 1) {
        mayor = n;
    }

    return mayor;
}

int main() {
    long long n = 600851475143;
    long long primom = primomayor(n);

    cout << primom;

    return 0;
}
