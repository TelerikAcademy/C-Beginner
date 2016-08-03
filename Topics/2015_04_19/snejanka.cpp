#include <iostream>
using namespace std;

int main () {
  bool A[101];
  long long m, n, i, sum=0;
  cin >> n >> m;
  for (i=1; i<=n; i++) {A[i]=true;}
  ///A[1]=false;
  for (i=1; A[i]; ) {
    A[i]=false;
    sum++;
    i=i+m;
    if (i>n) i=i-n;
  }
  cout << sum << endl;
  return 0;
}
