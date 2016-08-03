#include <iostream>
using namespace std;

void prn_hiph(char ch){
  long long i;
  for (i=40; i>0 ; i=i-1) {
    cout << ch;
  }
  cout << endl;
}
void prn_tbl(long long from, long long to, long long bb){
  long long a, b;
  prn_hiph('=');
  cout << "   a       b      a*b\n";
  prn_hiph('-');
  for (a=from; a<=to; a=a+1){
    cout << "   " <<a<<"      "<<bb<< "     "<<a*bb<<endl;
  }
  prn_hiph('=');
}


int main () {
  long long a,b,c;
  cout << "Za koi chisla da e tablicata za umnovenie (dve chisla) ";
  cin >> b >> c;
  for (;b<=c; b=b+1){
    prn_tbl(1,5,b);
  }
  return 0;
}
