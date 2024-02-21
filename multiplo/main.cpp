//MULTIPLO DI 2 NUMERI
#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "inserire i 2 numeri\n";
    cin >> n1;
    cin >> n2;
    if (n1%10 == 0 || n2%n1 == 0) cout << "\nuno dei 2 è multiplo dell'altro";
    else cout << "\nnon sono multipli";
}
