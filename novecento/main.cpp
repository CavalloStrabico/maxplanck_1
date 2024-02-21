// NOVECENTO
// restituisce i griorni passati dal primo gennaio del 1900
#include <iostream>
using namespace std;

int main (){
    int giorni_di_febbraio = 28;
    int giorni_inizio_mese;
    int giorni_inizio_anno;
    int annni_dal_1900=0;
    int secoli_dal_1900;
    int quadrisecoli_dal_1900;
    int quadri_anni_1900;
    int risultato;
    int giorno, mese, anno;
    cin >> giorno;
    cin >> mese;
    cin >> anno;

    if (anno % 400 == 0 ||
        anno % 100 != 0 &&
        anno % 4 == 0)
    {
        giorni_di_febbraio = 29;
    }
    int g1=31;
    int g2=g1+giorni_di_febbraio;
    int g3=g2+31;
    int g4=g3+30;
    int g5=g4+31;
    int g6=g5+30;
    int g7=g6+31;
    int g8=g7+31;
    int g9=g8+30;
    int g10=g9+31;
    int g11=g10+30;

    if (mese == 1) giorni_inizio_mese= 0;
    if (mese == 2) giorni_inizio_mese= g1;
    if (mese == 3) giorni_inizio_mese= g2;
    if (mese == 4) giorni_inizio_mese= g3;
    if (mese == 5) giorni_inizio_mese= g4;
    if (mese == 6) giorni_inizio_mese= g5;
    if (mese == 7) giorni_inizio_mese= g6;
    if (mese == 8) giorni_inizio_mese= g7;
    if (mese == 9) giorni_inizio_mese= g8;
    if (mese == 10) giorni_inizio_mese= g9;
    if (mese == 11) giorni_inizio_mese= g10;
    if (mese == 12) giorni_inizio_mese= g11;
    giorni_inizio_anno = giorni_inizio_mese + giorno - 1;

    annni_dal_1900 = anno - 1900;
    secoli_dal_1900 = (annni_dal_1900 - 1) / 100;
    quadrisecoli_dal_1900 = (annni_dal_1900 - 100 - 1) / 400;
    quadri_anni_1900 = (annni_dal_1900 - 1) / 4;
    if (anno > 2000) quadrisecoli_dal_1900++;

    cout << giorni_inizio_anno + annni_dal_1900 * 365 + quadri_anni_1900 - secoli_dal_1900 + quadrisecoli_dal_1900;
}