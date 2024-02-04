#include <iostream>
using namespace std;

int main(){ int n1,n2,n3,n4,s;
    cout << " inserire il prezzo degli articoli\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;
    s = n1+n2+n3+n4;
    if(s>=100){
        cout << s-(s*10)/100;
    }
    else{
        cout << s;
    }
}