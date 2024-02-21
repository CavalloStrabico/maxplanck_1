#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "inserire i tre lati\n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a*a+b*b == c*c || c*c+a*a == b*b || b*b+c*c == a*a){
        cout << "\nÈ rattangolo";
    }
    else{
        cout << "\nNon è rettangolo";
    }
}