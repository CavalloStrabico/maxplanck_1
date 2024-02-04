//numero divisibile per 3
#include <iostream>
using namespace std;

int main(){ int n;
    cout << "inserire il numero\n";
    cin >> n;
    if(n%3==0){
        cout << "il numero è divisibile per 3";
    }
    else{
        cout << "il numero non è divisibile per 3";
    }
}