//NOVECENTO
#include <iostream>
using namespace std;
int main (){
    int anno, g, mese, x, giorni_passati, ab, a;
    cin >> g;
    cin >> mese;
    cin >> anno;

    int g1=31;
    int g2=g1+28;
    int g3=g2+31;
    int g4=g3+30;
    int g5=g4+31;
    int g6=g5+30;
    int g7=g6+31;
    int g8=g7+31;
    int g9=g8+30;
    int g10=g9+31;
    int g11=g10+30;

    if (mese == 1) mese= 0;
    if (mese == 2) mese= g1;
    if (mese == 3) mese= g2;
    if (mese == 4) mese= g3;
    if (mese == 5) mese= g4;
    if (mese == 6) mese= g5;
    if (mese == 7) mese= g6;
    if (mese == 8) mese= g7;
    if (mese == 9) mese= g8;
    if (mese == 10) mese= g9;
    if (mese == 11) mese= g10;
    if (mese == 12) mese= g11;

    ab = anno-1900;
    if (anno%400 == 0 || anno%100 != 0 && anno%4 == 0){
        a = 366;
    }
    else{
        a = 365;
    }
    giorni_passati= x+mese+g;
    cout << giorni_passati-1;

}