// NUMER OCENTRALE
#include <iostream>
using namespace std;

int main() {
    int numero, n1, n2, n3;
    cout << "inserirre il numero di 3 cifre\n";
    cin >> numero;
    n1 = numero % 10;
    n2 = (numero % 100)%10;
    n3 = (numero % 1000)%100;
    if (n1 == n2 && n2 == n3){
        cout << "\ni numeri sono uguali";
    }
    else{
        cout << "\ni numeri sono tutti diversi";
    }
    if (n2> n1 && n2>n3) cout << "\nil numero centrale è maggiare";
}