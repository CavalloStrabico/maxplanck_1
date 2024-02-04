//scrivere un numero da 30 a 99 in lettere
#include <iostream>
using namespace std;

int main() {
    int value;
    cin >> value;
    int lsd = value % 10;
    int msd = (value/10)%10;
    if (msd==3) cout << "trent";
    if (msd==4) cout << "quarant";
    if (msd==5) cout << "cinquant";
    if (msd==6) cout << "sessant";
    if (msd==7) cout << "settant";
    if (msd==8) cout << "ottant";
    if (msd==9) cout << "novant";

    if (lsd==0) cout << "a";
    if (lsd==1) cout << "uno";
    if (lsd==2) cout << "adue";
    if (lsd==3) cout << "atre";
    if (lsd==4) cout << "aquattro";
    if (lsd==5) cout << "acinque";
    if (lsd==6) cout << "asei";
    if (lsd==7) cout << "asette";
    if (lsd==8) cout << "otto";
    if (lsd==9) cout << "anove";
}