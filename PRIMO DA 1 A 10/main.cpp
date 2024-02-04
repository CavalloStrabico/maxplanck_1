//PROBLEMA NUMERO PRIMO DA 1 A 10
#include <iostream>
using namespace std;

int main() { int numero;
    cout << "inserire il numeo da 1 a 10\n";
    cin >> numero;
    if (numero == 1 || numero == 2 || numero == 3 || numero == 5 || numero == 7){
        cout <<"\nprimo";
    }
    else{
        cout << "\nnon primo";
    }
}