#include <iostream>
using namespace std;

int main () {
  long long po_predishno, predishno, nomer, n,
             sledvashto;

  cin >> n;

  for ( po_predishno=1,predishno=1, nomer=1;
        nomer < n; nomer = nomer+1) {

    sledvashto = po_predishno + predishno;
    po_predishno = predishno;
    predishno = sledvashto;

  }
  cout << po_predishno << endl;
  return 0;
}
