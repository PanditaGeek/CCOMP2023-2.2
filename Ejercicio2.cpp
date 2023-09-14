#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese cantidad de números perfectos: ";
    cin >> numero;

    int perfectos = 0;

    for (int c = 2; perfectos < numero; c++) {
        int suma = 0;
      
        for (int c2 = 1; c2 <= c/2; c2++) {
            if (c % c2 == 0) {
                suma += c2;
            }
        }
        if (suma == c) {
            cout << c << " ";
            perfectos++;
        }
    }
    return 0;
}
