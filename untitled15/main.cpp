#include <iostream>
using namespace std;

int main (){
    int numero, C1, C2, C3, C4, C5, C6, somma, N1, N2, N3;
    cout << "inserire il numero di 6 cifre\n: ";
    cin >> numero;
    C1 = numero/100000;
    C2 = (numero/100000)%10;
    C3 = (numero/10000)%10;
    C4 = (numero/1000)%10;
    C5 = (numero/100)%10;
    C6 = numero%10;
    N1 = C1*10+C6;
    N2 = C2*10+C5;
    N3 = C3*10+C4;
    cout << "i tre numeri sono: " << N1 << " " << N2 << " " << N3 << "\n";
    somma = N1+N2+N3;
    cout << "la somma dei tre numeri vale: " << somma;
}
