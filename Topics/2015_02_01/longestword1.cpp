#include <iostream>
#include <cstring>

using namespace std;

int main () {

  long long n, i;
  char duma[51], nay_dulga_duma[51];

  cin >> n;
  cin >> nay_dulga_duma;
  for (i=0;i<n-1; i=i+1){
    /// Чете поредна дума в duma
    cin >> duma;
    /// Сравнява пооредната прочетена с най-дългата до момента
  }
    if (strlen(duma)>strlen(nay_dulga_duma)) {
      /// коригира най-дългата дума, ако текущата е по-дълга

      strcpy(nay_dulga_duma,duma);
      /*
      for(i=0;i<=strlen(duma);i=i+1){
        nay_dulga_duma[i]=duma[i];
      }
      */

    /// nay_dulga_duma=duma;
  }

  cout << nay_dulga_duma << endl;

  return 0;
}
