// GIORNI PASSATI DAL 1/1
#include <iostream>
using namespace std;

int main() {
    int giorno, mese;
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
    cout <<"inserire il giorno e mese\n";
    cin >> giorno;
    cin >> mese;
    if (mese == 1) cout << giorno-1;
    if (mese == 2) cout << g1+giorno-1;
    if (mese == 3) cout << g2+giorno-1;
    if (mese == 4) cout << g3+giorno-1;
    if (mese == 5) cout << g4+giorno-1;
    if (mese == 6) cout << g5+giorno-1;
    if (mese == 7) cout << g6+giorno-1;
    if (mese == 8) cout << g7+giorno-1;
    if (mese == 9) cout << g8+giorno-1;
    if (mese == 10) cout << g9+giorno-1;
    if (mese == 11) cout << g10+giorno-1;
    if (mese == 12) cout << g11+giorno-1;
}