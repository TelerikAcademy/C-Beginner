#include <iostream>
#include <algorithm>
using namespace std;

long long A[100];

int main () {
  long long n,i;
  cin >> n;
  for (i=0; i<n; i++) {
    cin >> A[i];
  }
  /// —ортирамеееее!!!
  sort(A+5, A+n);
  /// я да видим к'во станј !
  for (i=0; i<n; i++) {
    cout << A[i] << ' ';
  }
  return 0;
}
