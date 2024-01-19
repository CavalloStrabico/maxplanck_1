#include <iostream>
using namespace std;

int main() {
    int V, S1, D1, D2;
    cout << "inserire il numero intero di 4 cifre ";
    cin >> V;
    D1 = V / 100;
    D2 = V % 100;
    S1 = D1 + D2;
    cout <<D1;
    cout <<D2;

    cout << "il risultato è "<<S1;

}