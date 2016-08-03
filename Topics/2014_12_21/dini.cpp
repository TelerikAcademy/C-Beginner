#include <iostream>
using namespace std;

int main () {
  int dni, posadeni[15], kg, pari, n, den,
      kakvo_pravim, kolko;

  cin >> n;
  pari = 0;
  kolko = 0;
  for (den=1; den<=n; den=den+1){
    cin >> kakvo_pravim;
    if (kakvo_pravim == 1) {
      posadeni[kolko] = den;
      kolko = kolko +1;
      }
    else {
      kolko = kolko - 1;
      dni = den-posadeni[kolko];
      kg = dni*dni;
      pari = pari + kg;
    }
  }

  cout << "Spechelihme: "<<pari<<endl;


  return 0;
}
