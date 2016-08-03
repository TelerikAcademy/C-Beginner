#include <iostream>
using namespace std;

int main () {
  long long predishno, po_predishno,
             nomer, n, segashno;

  cout <<"Vuvedi nomer na fibonachievo chislo ";
  cin >> n;

  if (n < 3) {
    cout << "Tursenoto fibonachievo chislo e 1";
  }
  else {

    for (nomer = 2, predishno=1, po_predishno=1;
          nomer < n;) {
      segashno = predishno + po_predishno;
      nomer = nomer + 1;
      po_predishno = predishno;
      predishno = segashno;
    }

    cout << n << "-to fibonachievo chislo e "
         << segashno << endl;
  }

  return 0;
}
