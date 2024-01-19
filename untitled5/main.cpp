#include <iostream>
using namespace std;
int main() {
    int prezzo,per_sconto,prezzo_scontato,valore_sconto;
    cout<<"inserire il prezzo dell'articolo aquistato\n";
    cin >> prezzo;
    cout<<"inserire la percentuale dello sconto (senza scrivere %)\n";
    cin >> per_sconto;
    valore_sconto= (prezzo * per_sconto) / 100;
    prezzo_scontato= prezzo - valore_sconto;
    cout << "il prezzo dellarticolo aquistato vale: " << prezzo_scontato;
    cout << "\nil valore dello sconto è " << valore_sconto;
}
