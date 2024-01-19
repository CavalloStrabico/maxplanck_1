#include <iostream>
using namespace std;

int main() {
    int centesimi, conteggio_monete=0;
    int m1 = 50;
    int m2 = 20;
    int m3 = 10;
    int m4 = 5;
    int m5 = 2;
    int m6 = 1;
    cout << "inserire il valore da cambiare in centesimi\n: ";
    cin >> centesimi;
    conteggio_monete = centesimi/m1;
    centesimi = centesimi%m1;
    cout << "servono\n" << conteggio_monete << " monete da " << m1 << " centesimi\n";
    //m2
    conteggio_monete = centesimi/m2;
    centesimi = centesimi%m2;
    cout << "servono\n" << conteggio_monete << " monete da " << m2 << " centesimi\n";
    //m3
    conteggio_monete = centesimi/m3;
    centesimi = centesimi%m3;
    cout << "servono\n" << conteggio_monete << " monete da " << m3 << " centesimi\n";
    //m4
    conteggio_monete = centesimi/m4;
    centesimi = centesimi%m4;
    cout << "servono\n" << conteggio_monete << " monete da " << m4 << " centesimi\n";
    //m5
    conteggio_monete = centesimi/m5;
    centesimi = centesimi%m5;
    cout << "servono\n" << conteggio_monete << " monete da " << m5 << " centesimi\n";
    //m6
    conteggio_monete = centesimi/m6;
    centesimi = centesimi%m6;
    cout << "servono\n" << conteggio_monete << " monete da " << m6 << " centesimi\n";
}


