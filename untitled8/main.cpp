#include <iostream>
using namespace std;
int main() {
    int numero, cifra;
    cout << "inserire un numero intero di tre cifre: ";
    cin >> numero;
    cout << "il numero rovesciato è: \n";
    cifra= numero % 10;
    cout << cifra;
    numero= numero / 10;
    cifra= numero % 10;
    cout << cifra;
    numero /=  10;
    cifra= numero % 10;
    cout << cifra << "\n";
}