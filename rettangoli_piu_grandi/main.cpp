#include <iostream>
using namespace std;

int main() {
    int h1, h2, b1, b2;
    cout << "inserire base e altezza dei 2 rettangoli\n";
    cin >> h1;
    cin >> b1;
    cin >> h2;
    cin >> b2;
    if (h1*b1 > h2*b2){
        cout << "\nil rettangolo 1 è maggiore";
    }
    else{
        cout << "\nil rettangolo 2 è maggiore";
    }
}