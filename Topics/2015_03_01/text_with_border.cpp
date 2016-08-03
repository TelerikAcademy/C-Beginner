#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char A[65];
  long long txtlen, i;

  cin.getline(A,60);
  txtlen = strlen(A);
  for (i=0;i<txtlen+2;i++) {cout << '*';}
  cout << endl <<'*'<<A<<'*'<<endl;
  for (i=0;i<txtlen+2;i++) {cout << '*';}
  cout << endl;

  return 0;
}
