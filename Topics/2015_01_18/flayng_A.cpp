#include <iostream>
using namespace std;

int main () {
  char A='@';
  long long kolko,j;

  cout << A;
  for (kolko = 0; kolko < 70; kolko = kolko + 1){
    for (j=0;j<20000000;j++);
    cout << '\b';
    cout << ' ';
    cout << A;
    //cout << '\a';
  }
  return 0;
}
