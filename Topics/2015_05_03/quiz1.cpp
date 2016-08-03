#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long a){
  /// body of func.
  if (a%2==0) {
    if (a==2) {return true;}
    return false;
  }
  long long x=sqrt(a);
  for (long long i=3; i<=x; i=i+2){
    if (a%i==0) {return false;}
  }
  return true;
}
int main () {
  long long n, m, i, j, A[4]={1,3,7,9}, brc,dopisvaniya;
  cin >> n;
  for (i=0;i<4;i++){
    m=n*10+A[i];
    if (is_prime(m)){
      cout << m << endl;
      return 0;
    }
  }///                          dopisvaniya = dopisvaniya*10
  for (brc=1,dopisvaniya=10; true; brc++, dopisvaniya *= 10){
    for (j=0; j<dopisvaniya; j++){
      for (i=0;i<4;i++){
        m=(n*dopisvaniya+j)*10+A[i];
        if (is_prime(m)){
          cout << m << endl;
          return 0;
        }
      }
    }
  }
}
