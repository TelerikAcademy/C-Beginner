#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[31], w2[31];
  long long len1,len2,i,minlen;
  cin >> w1;
  cin >> w2;

  len1=strlen(w1);
  len2=strlen(w2);
  if (len1<len2) {minlen=len1;}
  else {minlen=len2;}

  for (i=0;i<minlen;i++){
    if (w1[i]!=w2[i]) break;
  }
  if (w1[i]==w2[i]) {cout << "Ednakvi sa\n";}
  else {
    if (w1[i]<w2[i]) {cout << "Purvata duma e po-napred\n";}
    else {cout << "Vtorata duma e po-napred\n";}
  }
  return 0;
}
