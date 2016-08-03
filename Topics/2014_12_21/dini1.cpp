#include <iostream>
using namespace std;

int main () {
  long long
    n,           /// колко са дните в задачата
    kakvo_pravi, /// какво да се прави поредния
                 ///   ден
    den,         /// номер на поредния ден в задачата
    dni,         /// колко дни е расла динята
    pari,        /// парите спечелени от продажбата
    zasadeni[50],/// кога са засадени дините
                 ///   Това е СТЕКЪТ!
    top;         /// колко са засадените,
                 ///   и на кое място да се запише
                 ///   данната за поредната засадена

  cin >> n;
  top = 0;
  pari = 0;
  for(den=0;den<n;den=den+1){
    cin >> kakvo_pravi;
    if (kakvo_pravi==1){  /// засаждане
      zasadeni[top] = den;
      top = top + 1;
      }
    else {               /// бере и продава
      top = top - 1;
      dni = den - zasadeni[top];
      pari = pari + dni*dni;
    }
  }
  cout << "Maksimalnata pechalba e: "<<pari<<endl;
  return 0;
}
