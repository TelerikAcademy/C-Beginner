#include <iostream>
using namespace std;

int main () {
  long long uspech[27], nomer;

  for (nomer=0; nomer < 27; nomer = nomer + 1) {
    cin >> uspech[nomer];

  }

  for (nomer=0; nomer < 27; nomer = nomer + 1) {
    cout <<"Uchenik s nomer " << nomer<<
         " ima uspeh "<< uspech[nomer] << endl;

  }


  return 0;
}
