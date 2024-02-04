// PROBLEMA TRIANGOLO EQUILATERO
#include <iostream>
using namespace std;

int main() { int a, b, c;
    cout << "inserire il valore dei 3 lati\n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a==b && a==c){
        cout << "\nil triangolo è equilatero";
    }
    else{
        cout << "\n il triangolo non è equilatero";
    }
}