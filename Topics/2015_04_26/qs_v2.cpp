#include <iostream>
#include <algorithm>
using namespace std;

bool my_func(long long a, long long b){
  if (a%2>0){
    if (b%2==0) {return true;}
    else {return (a<=b);}
    }
  else {
    if (b%2==0) {return (a>=b);}
    else {return false;}
  }
}/**
 a   b    ����� �� ����� ���� ������ �����
�.   �.   true
�.   �.   (a<=b)
�.   �.   (a>=b)
�.   �.   false

*/

int main () {
  long long  A[100];
  long long n,i;

  cin >> n;
  for (i=0;i<n;i++){
    cin >> A[i];
  }

  /// �������������!!!
  sort(A, A+n, my_func);
  /// � �� ����� �'�� ����� !
  for (i=0;i<n;i++){
    cout << A[i] << ' ';
  }
  return 0;
}
