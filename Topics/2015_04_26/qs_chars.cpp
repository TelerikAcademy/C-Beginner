#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char A[100];

int main () {
  long long n,i;
  cin.getline(A,99);
  n=strlen(A);
  /// �������������!!!
  sort(A, A+n);
  /// � �� ����� �'�� ����� !
  cout << A<< endl;
  return 0;
}
