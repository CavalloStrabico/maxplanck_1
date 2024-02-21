//PROBLEMA ANNO SCOLASTICO
#include <iostream>
using namespace std;

int main() {
    int giorno, mese;
    cout << "INSERIRE GIORNI E MESI\n";
    cin >> giorno;
    cin >> mese;

    if (giorno > 12 && mese > 9 && mese < 12 || giorno < 31 && mese < 12 &&  mese > 9){
        cout << "\nprimo periodo";
    }
    else if (giorno > 1 && mese > 1 && mese < 6 || giorno < 8 && mese < 6 && mese > 1){
        cout << "\nsecondo periodo";
    }
    else cout << "\nvacanza estiva";
}