#include <iostream>
#include <cmath>
using namespace std;

 int main(){
     float P1,P2,S1,S2,Q1,Q2;
     cout<<"inserire il prezzo dell'articolo 1 e 2\n";
     cin>>P1;
     cin>>P2;
     cout<<"inserire la quantita dei prodotti 1 e 2 \n";
     cin>>Q1;
     cin>>Q2;
     S1=P1*Q1;
     S2=P2*Q2;
     cout<<"i prezzi valgono: "<<S1<<" "<<S2;

}