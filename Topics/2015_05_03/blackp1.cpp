#include <iostream>
using namespace std;
long long A[50];

void do_cut(long long s, long long kolko){
  long long B[kolko], i;
  for (i=0;i<kolko;i++) {B[i]=A[s+i];}
  for (i=s-1;i>=0;i--) {A[i+kolko]=A[i];}
  for (i=0;i<kolko;i++){A[i]=B[i];}
}

int main () {
  long long n,r,p,c,i;
  cin >> n >> r;
  for (i=0;i<n;i++) {A[i]=i+1;}
  for (i=0;i<r;i++){
    cin >> p >> c;
    do_cut(p-1,c);
  }
  cout << A[0] << endl;
  return 0;
}
