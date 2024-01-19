#include <iostream>
using namespace std;

void modo1(){
    int seme;
    cout << "inserisre il valore per la tabellina: ";
    cin >> seme;
    cout << seme << " ";
    cout << seme*2 << " ";
    cout << seme*2 << " ";
    cout << seme*3 << " ";
    cout << seme*4 << " ";
    cout << seme*5 << " ";
    cout << seme*6 << " ";
    cout << seme*7 << " ";
    cout << seme*8 << " ";
    cout << seme*9 << " ";
    cout << seme*10 << " ";
}

void modo2(){
    int seme,n=1;
    cout << "inserisre il valore per la tabellina: ";
    cin >> seme;
    while(n<=10) {
        cout << seme * n << " ";
        n++;
    }
}

int main(){
    modo2();
}