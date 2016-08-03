#include <iostream>
using namespace std;

int main () {
  long long predishno, tekushto, n, nomer, sledvashto;

  cout << "Vuvedi nqkoe fibonachievo chislo: ";
  cin >> n;

  for (predishno = 1, tekushto = 1, nomer = 2;
       tekushto < n; nomer = nomer + 1 ){
     sledvashto = tekushto + predishno;
     predishno = tekushto;
     tekushto = sledvashto;
  }

  if (tekushto != n) {
    cout <<"Tekushto fibonachievo "<<tekushto<<endl;
    cout << "Ne si vuvel fibonachievo chislo!"<<endl;
    }

  else {
    cout << n << " e " << nomer
         <<"-to fibonachievo chislo"<< endl;
  }

  return 0;
}
