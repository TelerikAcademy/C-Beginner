#include <iostream>
using namespace std;
long long A[100000], n, i, j;

int main () {
  char c;
  cin >> n >> c;
  if (c=='l'){
    for (i=0,j=0; i<n; i++){
      cin >> A[j];
      if (A[j]>0) {j++;}
    }
    for (i=1;i<j;i++){
      if (A[i]==A[i-1]){
        A[i-1] = A[i-1]+A[i];
        A[i]=0;
      }
    }
    cout << A[0];
    for (i=1, j=1; i<n; i++){
      if (A[i]>0){cout << ' ' << A[i];j++;}
    }
    if (j<n){
      for (j=n-j, i=0; i<j; i++) {
        cout <<" 0";
      }
    }
    cout << endl;
    }
  else {


  }
  return 0;
}
