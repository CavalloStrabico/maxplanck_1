#include <iostream>
using namespace std;

int main() {float n1, n2;
    cin >> n1;
    cin >> n2;
    if (n1 > n2) {
        cout << n1 << "\n" <<  n2 << "\n" << n1 - n2;
    } else {
        cout << n2 << "\n" << n1  << "\n" << n2 - n1;
    }
}