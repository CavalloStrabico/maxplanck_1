// PROBLEMA ANNO MISESTILE
#include <iostream>
using namespace std;
//https://it.wikipedia.org/wiki/Anno_bisestile

int main() {
    int anno;
    cout <<"inserire l'anno\n";
    cin >> anno;
/*Nel calendario gregoriano sono bisestili
gli anni non secolari il cui numero è divisibile per 4;
gli anni secolari il cui numero è divisibile per 400. */
    if (anno%400 == 0 || anno%100 != 0 && anno%4 == 0){
        cout <<"\nl'anno è bisestile";
    }
    else{
        cout <<"\nl'anno non è bisetile";
    }
}