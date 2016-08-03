/**
  heads(n) = heads(n-1)+heads(n-2)-(n-2)
  за n>2
  heads(2) = 5
  heads(1) = 3


*/
#include <iostream>
using namespace std;

long long heads(long long day){
  if (day==1) {return 3;}
  else {
    if (day==2) {return 5;}
    else {return heads(day-1)+heads(day-2)-(day-2);}
  }
}

int main () {
  long long n;
  cin >> n;
  cout << heads(n) << endl;
  return 0;
}
