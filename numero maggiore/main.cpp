//numero maggiore
#include <iostream>
using namespace std;

int main() { int n, n2;
    cout << "inserire i due numeri\n";
    cin >> n;
    cin >> n2;
    if(n>n2){
        cout << n << " È maggiore";
    }
    if(n2>n){
        cout << n2 << " È maggiore";
    }
    if(n==n2){
        cout << "I 2 numeri sono uguali";
    }
}