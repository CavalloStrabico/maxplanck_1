#include <iostream>
using namespace std;

int main() {
    double valore, risultato;
    int selezione;
    char udm;
    cout << "seleziona la conversione:\n\t1) da gradi Celsius a Fahrenheit\n\t2) da gradi Fahrenheit a Celsius\n: ";
    cin >> selezione;
    if (selezione == 1) {
        cout<< "inserire i gradi Celsius: ";
        cin>> valore;
        risultato = valore * 9.0/5.0 + 32.0;
        udm = 'F';
    } else {
        cout<< "inserire i gradi Fahrenheit: ";
        cin>> valore;
        risultato = (valore - 32.0) * 5.0/9.0;
        udm = 'C';

    }
    cout<< "il risultato vale: " << risultato << " °" << udm;

}
