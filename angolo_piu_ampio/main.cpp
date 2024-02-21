//PROBLEMA ANGOLO AMPIO
#include <iostream>
using namespace std;

int main () {
    int gradi1, gradi2, primi1, primi2, secondi1, secondi2, maggiore;
    cout << "inserire le misure dei 2 angoli in gradi, primi, secondi\n";

    cout << "angolo 1\n";
    cin >> gradi1;
    cin >> primi1;
    cin >> secondi1;
    cout << "\n";

    cout << "angolo 2\n";
    cin >> gradi2;
    cin >> primi2;
    cin >> secondi2;
    cout << "\n";

    if (gradi1<gradi2){
        maggiore = 2;
    }
    else if (gradi1>gradi2){
        maggiore = 1;
    }
    else if (primi1<primi2){
        maggiore = 2;
    }
    else if( primi1>primi2){
        maggiore = 1;
    }
    else if (secondi1<secondi2){
        maggiore = 2;
    }
    else if (secondi1>secondi2){
        maggiore = 1;
    }
    else {
        cout << "i 2 angoli sono uguali";
        exit(0);
    }
    cout << "l'angolo " << maggiore << " è maggiore dell'angolo " << (1+maggiore%2);
}