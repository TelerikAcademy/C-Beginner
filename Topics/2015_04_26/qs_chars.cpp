#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char A[100];

int main () {
  long long n,i;
  cin.getline(A,99);
  n=strlen(A);
  /// —ортирамеееее!!!
  sort(A, A+n);
  /// я да видим к'во станј !
  cout << A<< endl;
  return 0;
}
