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
  /// �������������!!!
  sort(A+5, A+n);
  /// � �� ����� �'�� ����� !
  for (i=0; i<n; i++) {
    cout << A[i] << ' ';
  }
  return 0;
}
