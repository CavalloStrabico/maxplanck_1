#include <iostream>
using namespace std;
int main() {
    int numero, x, y;
    cout << "inserire il numero: ";
    cin >> numero;
    x = numero%10;
    y = numero/10;
    cout << "y vale: " << y << " " <<"x vale; " << x;
}
