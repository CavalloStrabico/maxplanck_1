#include <iostream>
using namespace std;

int main() {float n1, n2;
    cout << "inserire i due numeri\n";
    cin >> n1;
    cin >> n2;
    if (n1 > n2) {
        cout << n1 << " È maggiore\n" << n2 << " È minore\n" << "la differenza vale " << n1 - n2;
    } else {
        cout << n2 << " È maggiore\n" << n1 << " È minore\n" << "la differenza vale " << n2 - n1;
    }
}