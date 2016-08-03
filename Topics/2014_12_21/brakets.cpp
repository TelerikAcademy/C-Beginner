#include <iostream>
using namespace std;

int main () {
  long long n, open_braket[50], top, chislo, i;
  top = 0;

  cin >> n;
  for (i=0;i<n; i=i+1){
    cin >> chislo;
    if (chislo == 0){
      open_braket[top]=chislo;
      top = top+1;
    }
    else {
      if (top == 0) {
        cout << "NO! (nyama dostatuchno otvaryashti)";
        return 0;
      }
      else {
        top=top-1;
      }
    }



  }

  if (top > 0){
      cout << "NO! (nyama dostatuchno zatvaryashti";
    }
    else {
      cout << "YES!";
    }
  return 0;
}
/**
6
0 0 0 1 1 1
( ( ( ) ) )

6
0 0 1 1 1 0
( ( ) ) ) (

*/
