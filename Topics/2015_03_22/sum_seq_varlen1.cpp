#include <iostream>
using namespace std;

long long pro_m_nums(long long a, long long c){
  long long r=1, i;
  for (i=a; i<a+c; i++) {
    r = r * i;
  }
  return r;
}

long long sum_products(long long q, long long c){
  long long sum=0, i;
  for (i=1; i<=q; i++) {
    sum = sum + pro_m_nums(i, c);
  }
  return sum;
}

int main () {
  long long n,m,sum=0, i;
  cin >> n >> m;
  /**
  for (i=1; i<=n-m+1; i++){
    sum = sum + pro_m_nums(i,m);
  }


  cout << sum << endl;
  */

  cout << sum_products(n-m+1, m) << endl;
  return 0;
}
