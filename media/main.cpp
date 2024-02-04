#include <iostream>
using namespace std;
int main() { float n1, n2 ,n3, m;
    cout << "inserire i 3 numeri\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    m = (n1+n2)/2;
    if (m == n3){
        cout << "la media è uguale a " << n3;
    }
    else{
        cout << "la media non è uguale a " << n3;
    }
}