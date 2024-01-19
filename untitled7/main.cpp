#include <iostream>
using namespace std;

int main(){
    float Altezza, Base, lato, Area, Perimetro;
    cout <<"inserire i valore rispettivo della base e dell'altezza: \n";
    cin >> Base ;
    cin >> Altezza;
    Area= (Base * Altezza)/2;
    lato= sqrt((Base/2*Base/2)*(Altezza*Altezza));
    Perimetro= lato*2+Base;
    cout << "l'are e il perimetro valgono: "<< Area<< " "<< Perimetro;


}

