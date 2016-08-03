#include <iostream>
#include <algorithm>
using namespace std;

long long A[100];

bool my_func(long long a, long long b){
  return (a>=b);
}


int main () {
  long long n,i;
  cin >> n;
  ///n=15;
  for (i=0; i<n; i++) {
    cin >> A[i];
  }
  /// —ортирамеееее!!!
  sort(A, A+n, my_func);
  /// я да видим к'во станј !
  for (i=0; i<n; i++) {
    cout << A[i] << ' ';
  }
  return 0;
}
