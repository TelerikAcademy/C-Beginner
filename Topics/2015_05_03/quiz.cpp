#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long a){
  long long x=sqrt(a), i;
  if (a%2==0){
    if (a==2) {return true;}
    else {return false;}
  }
  for (i=3; i<=x; i=i+2){
    if (a%i==0) {return false;}
  }
  return true;
}

int main () {
  long long n,m,i,j,brc,st10;
  long long kcifri[4]={1,3,7,9};
  cin >> n;

  for (i=0;i<4;i=i+1) {
    m=n*10+kcifri[i];
    if (is_prime(m)) {
      cout << m << endl;
      return 0;
    }
  }

  for (brc=1, st10=10;true;brc=brc+1,st10=st10*10){
    for (j=0;j<st10; j=j+1){
      for (i=0;i<4;i=i+1) {
        m=(n*st10+j)*10+kcifri[i];
        if (is_prime(m)) {
          cout << m << endl;
          return 0;
        }
      }
    }
  }
}
