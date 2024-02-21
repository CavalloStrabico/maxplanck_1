#include <iostream>
#include <cstdlib>
using namespace std;
/* l'area del cerchio unitario è π r^2 (r=1 => π)
 * l'area del quadrato che lo contiene è (2r)^2 => 4
 * il rapporto tra l'area del cerchio e del quadrato è uguale a π/4
 * quindi il rapporto fre i punti nel cerchio  e quelli utilizzati è π/4
 * quindi π è uguale a 4 volte il rapporto fra i punti del cerchio e quelli totali
 * π = (4*pc)/n */
int main() {
    long long n;
    cout << RAND_MAX;

    //chiedo all'utente il numero di punti da utilizzare
    cout << "inserire il numero di punti\n";
    cin >> n;

    //finchè non ho generato tutti i punti
    long long i = 0;
    long long pc = 0;
    while (i<n) {
        i++;
        //genero un punto casuale
        double x = 2.0*rand()/RAND_MAX-1.0;
        double y = 2.0*rand()/RAND_MAX-1.0;
        //controllo se è denrto o fuori del cerchio
        if (x*x+y*y <= 1.0){
            //se è dentro incremento il conteggio dei punti interni
            pc++;
        }
        if (i%100000000 == 0) {
            double pi = (4.0 * pc) / i;
            cout << pi;
            cout << "\n";
            cout << abs((pi - M_PI) / M_PI) * 100 << "%\n";
        }
    }
    //quando ho finito i punti
    double pi = (4.0*pc)/n;
    //calcolo il conteggio dei punti interni / il n di numeri da utilizzare e lo stampo all'utente
    cout << pi;
    cout << "\n";
    cout << abs ((pi-M_PI)/M_PI)*100 << "%";
}