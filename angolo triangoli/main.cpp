// PROBLEMA ANGOLO TRIANGOLO
#include <iostream>
using namespace std;

int main() { int a, b, y;
    cout << "inserire il valore dei tre angoli (la sooma deve dare 180°)\n";
    cin >> a;
    cin >> b;
    cin >> y;
    if (a == 90) cout << "\nÈ un triangolo rettangolo";
    if (b == 90) cout << "\nÈ un triangolo rettangolo";
    if (y == 90) cout << "\nÈ un triangolo rettangolo";

    if (a > 90) cout << "\nÈ un triangolo ottusangolo";
    if (b > 90) cout << "\nÈ un triangolo ottusangolo";
    if (y > 90) cout << "\nÈ un triangolo ottusangolo";

    if (a < 90 && b < 90 && y < 90){
        cout << "\nÈ un triangolo acutangolo";
    }
}