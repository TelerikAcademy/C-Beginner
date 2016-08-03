#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[31], w2[31];
  long long len1,len2,i,minlen;
  cin >> w1;
  cin >> w2;

  i=strcmp(w1,w2);

  if (i==0) {cout << "Ednakvi sa\n";}
  else {
    if (i<0) {cout << "Purvata duma e po-napred\n";}
    else {cout << "Vtorata duma e po-napred\n";}
  }
  return 0;
}
