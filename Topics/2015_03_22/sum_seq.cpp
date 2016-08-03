#include <iostream>
using namespace std;

long long pro3nums(long long a){
  return a*(a+1)*(a+2);
}

int main () {
  long long n,i, sum;
  cin >> n;
  for (i=1, sum=0; i<=n-2;i++){
    sum = sum+pro3nums(i);
  }
  cout << sum << endl;
  return 0;
}
