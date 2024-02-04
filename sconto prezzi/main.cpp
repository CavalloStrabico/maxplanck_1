#include <iostream>
using namespace std;

int main(){ float n1, n2;
    cin >> n1;
    cin >> n2;
    if (n1>100){
        cout << n1-(n1*30)/100;
    } else if (n1<=50) {
        cout << n1-(n1*10)/100;
    } else {
        cout << n1-(n1*20)/100;
    }
}