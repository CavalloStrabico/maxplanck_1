#include <iostream>
using namespace std;

int main (){
    int caramelle, caramelle2, caramelle3, caramelle4, alunni, CA, CP, CB;
    cout << "inserire il numero di alunni presenti nella classe\n: ";
    cin >> alunni;
    cout << "inserire la quantita di caramelle di: Pino, Pina, Pinuccio e Pinuccia\n: ";
    cin >> caramelle;
    cin >> caramelle2;
    cin >> caramelle3;
    cin >> caramelle4;
    CA = (caramelle + caramelle2 + caramelle3 + caramelle4)/alunni;
    cout << "ciascun alunno riceverà " << CA << " caramelle\n";
    CB = CA/4;
    cout << "ciascun ragazzo generoso riceverà: " << CB << " caramelle\n";
    CP = CB%10;
    cout << "il professore avrà: " << CP << " caramelle\n";

}