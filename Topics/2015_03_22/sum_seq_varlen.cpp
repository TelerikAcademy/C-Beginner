#include <iostream>
using namespace std;
long long pro_m_nums(long long a, long long c){
  long long product=1, i;
  for (i=a;i<a+c;i++){
    product = product * i;
  }
  return product;
}


int main () {
  long long n,m,i, sum;
  cin >> n >> m;
  for (i=1, sum=0; i<=n-m+1;i++){
    sum = sum+pro_m_nums(i,m);
  }
  cout << sum << endl;
  return 0;

  return 0;
}
