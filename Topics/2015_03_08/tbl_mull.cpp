#include <iostream>
using namespace std;

void prn_hiph(){
  long long i;
  for (i=40; i>0 ; i=i-1) {
    cout << '-';
  }
  cout << endl;
}


int main () {
  long long a,b;
  cout << "Za koe chislo da e tablicata za umnovenie";
  cin >> b;
  prn_hiph();
  cout << "   a       b      a*b\n";
  prn_hiph();
  for (a=1; a<=10; a=a+1){
    cout << "   " <<a<<"      "<<b<< "     "<<a*b<<endl;
  }
  prn_hiph();
  return 0;
}
