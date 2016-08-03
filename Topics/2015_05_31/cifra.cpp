#include <iostream>
using namespace std;

bool containD(long long number, long long digit){
  while (number >0){
    long long rdigit=number%10;
    if (rdigit==digit) return true;
    number=number/10;
  }
  return false;
}

int main () {
  long long L,R,D,br_chisla;
  cin >> L >> R >> D;
  for (br_chisla=0 ; L<=R; L++) {
    if (containD(L,D)) {
      cout << L << endl;
      br_chisla++;
    }
  }
  if (br_chisla==0) cout <<"None\n";
  return 0;
}
