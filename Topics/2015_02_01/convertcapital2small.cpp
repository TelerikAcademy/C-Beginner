#include <iostream>
using namespace std;

int main () {
  char A[100]  ;
  long long i;
  cin >> A;

  for (i=0; A[i] != '\0'; i=i+1) {
    if (A[i]>='a' and A[i]<='z') {
      A[i] = A[i] - ('a'-'A');
    }

  }

  for (i=0; A[i] != '\0'; i=i+1) {
    if (A[i]>='a' and A[i]<='z') {
      A[i] = A[i] + ('a'-'A');
    }

  }

  return 0;
}


