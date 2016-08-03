#include <iostream>
using namespace std;

long long A[100], n, i, a;
/// данните са в интервала [-10, 20]
/// Броячите трябва да са 20-(-10)+1 = 31
/// Число модификатор на данните Y=10
long long B[100], write_at=0, Y=10;
int main () {

  cin >> n;
  for (i=0;i<n;i++){
    cin >> a;
    a=a+Y;
    A[ a ]++;
  }

  for (i=0, write_at=0; write_at<n; write_at++){
    while(A[i]==0) {i++;}
    B[write_at]=i-Y;
    A[i]--;
  }

  for (i=0;i<n;i++){cout<<B[i]<<' ';}

  return 0;
}
