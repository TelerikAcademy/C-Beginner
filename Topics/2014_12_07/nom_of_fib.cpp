#include <iostream>
using namespace std;

int main () {
  long long predishno, po_predishno,
             nomer, n, segashno, fib;

  cout <<"Vuvedi nomer na fibonachievo chislo ";
  cin >> fib;

  if (fib == 1) {
    cout << "Fibonachievo chislo e s nomer 1 ili 2";
  }
  else {

    for (nomer = 2, predishno=1, po_predishno=1;
          predishno < fib;) {
      segashno = predishno + po_predishno;
      nomer = nomer + 1;
      po_predishno = predishno;
      predishno = segashno;
    }

    if (segashno > fib) {
      cout << "Vuvel si nefibonachievo!"<<endl;
      }
    else {
      cout << nomer << "-to fibonachievo chislo e "
         << segashno << endl;
    }

  }

  return 0;
}

