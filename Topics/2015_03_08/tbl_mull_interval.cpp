#include <iostream>
using namespace std;

void prn_hiph(char ch){
  long long i;
  for (i=40; i>0 ; i=i-1) {
    cout << ch;
  }
  cout << endl;
}


int main () {
  long long a,b,c;
  cout << "Za koi chisla da e tablicata za umnovenie (dve chisla) ";
  cin >> b >> c;
  for (;b<=c; b=b+1){
    prn_hiph('=');
    cout << "   a       b      a*b\n";
    prn_hiph('-');
    for (a=1; a<=10; a=a+1){
      cout << "   " <<a<<"      "<<b<< "     "<<a*b<<endl;
    }
    prn_hiph('=');
  }
  return 0;
}
