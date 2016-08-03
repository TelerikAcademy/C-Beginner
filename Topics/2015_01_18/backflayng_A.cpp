#include <iostream>
using namespace std;

int main () {
  char A='>';
  long long kolko,j;
  for (j=0;j<70;j++) {cout << ' ';}
  cout << A << ' ';
  for (kolko = 70; kolko >= 0; kolko = kolko - 1){
    for (j=0;j<10000000;j++);
    cout << '\b' << '\b';
    cout << A;
    cout << ' ' << '\b';

    //cout << '\a';
  }
  return 0;
}
