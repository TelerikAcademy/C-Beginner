#include <iostream>
using namespace std;
long long A[50];

void cut(long long p, long long c){
  long long B[c], i,j;
  //cout<<"Predi premestwane v bufera\n";
  for (i=p, j=0; i<p+c; i++, j++){B[j]=A[i];}
  //cout<<"Predi premestwane nadyasno\n";
  for (i=p-1; i>=0; i--){A[i+c]=A[i];}
  //cout<<"Predi vrushtane ot bufera\n";
  for (i=0;i<c;i++) {A[i]=B[i];}
  //cout<<"Kraj\n";
}

int main () {
  long long n,r,p,c,i;
  cin >> n >> r;
  for (i=0;i<n;i++) {A[i]=i;}
  for (i=0;i<r;i++){
    cin >> p >> c;
    cut(p-1,c);
  }
  cout << A[0]+1 << endl;
  return 0;
}
