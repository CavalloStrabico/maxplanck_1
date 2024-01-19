#include <iostream>
using   namespace  std;

int  main  (){
    float x1, x2, y1, y2, M1, M2;
    cout << "Inserire le due cordinate x e y dei 2 punti\n: ";
    cin >> x1;
    cin >> x2;
    cin >> y1;
    cin >> y2;
    M1 = (x1/x2)/2;
    M2 = (y1/y2)/2;
    cout << "il punto medio vale: " << M1 << ";" << M2;
}
