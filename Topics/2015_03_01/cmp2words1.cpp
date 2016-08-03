#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[31],w2[31];
  cin >> w1 >> w2;

  long long len1=strlen(w1), len2=strlen(w2), minlen,i;
  if (len1<len2){minlen=len1;}
  else {minlen=len2;}

  for (i=0; i<minlen; i=i+1){
    if (w1[i] != w2[i]) break;
  }

  if (w1[i]==w2[i]) {cout << "Ednakvi dumi\n";}
  else {
    if (w1[i]< w2[i]) {cout << "Purvata e po-napred\n";}
    else {cout << "Vtorata e po-napred\n";}
  }
  return 0;
}
