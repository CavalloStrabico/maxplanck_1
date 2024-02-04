// PROBLEMA TRIANGOLO ISC. EQU. E SCA.
#include <iostream>
using namespace std;

int main() { int a, b , c;
    cout << "iserire i tre lati\n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == b && a == c){
        cout << "\nÈ un triangolo equilateo";
    }
    if (a != b && a != c && c != b){
        cout << "\nÈ un triangolo scaleno";
    }
    if (a == b && c !=a || c == a && b != a || c == b && a != b ){
        cout << "\nE un triangolo isoscele";
    }
}