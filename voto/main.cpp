//PROBLEMA VOTO SUFFICIENTE
#include <iostream>
using namespace std;

int main() { float voto;
  cout << "inserire il voto ottenuto\n";
  cin >> voto;
  if (voto >= 8){
      cout << "\nIl voto ottenuto è buono";
  }
  if (voto <= 4.5){
      cout << "\nIl voto ottenuto è gravemente insufficiente";
  }
  if (voto ==5 || voto ==5.5){
      cout << "\nIl voto ottenuto è insufficiente";
  }
  if (voto <= 6 && voto > 7.5){
      cout << "\nIl voto ottenuto è sufficiente";
  }
}