#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char A[100];

bool back_order(char a, char b){
  return (a>=b);
}

int main () {
  long long n,i;
  cin.getline(A,99);
  n=strlen(A);
  /// —ортирамеееее!!!
  sort(A, A+n, back_order);
  /// я да видим к'во станј !
  cout << A<< endl;
  return 0;
}
