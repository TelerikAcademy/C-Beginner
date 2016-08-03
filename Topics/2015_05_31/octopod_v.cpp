#include <iostream>
#include <algorithm>

using namespace std;
long long A[100000], n, i, j;

void prnA(int nom){
  for (int i=0;i<nom;i++) cout << A[i] << ' ';
  cout << endl;
}

int main () {
  cin >> n;
  for (i=0;i<n;i++) {cin >> A[i];}
  sort(A, A+n);

  for (i=0,j=0;j<n;j++){
    if (A[j] != A[i]) {
      i++;
      A[i]=A[j];
    }
  }
  ///cout << i << endl;
  ///prnA(i);

  if (i%2==1) {cout << A[i/2+1] << endl;}
  else {cout << A[i/2] << endl;}
  return 0;
}
