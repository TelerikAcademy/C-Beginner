#include <iostream>
using namespace std;
long long first, second, k, i, nfirst=1, nsecond=2;

void chek_contest(long long rate, long long nom){
  if (rate > second and rate<first) {
    second=rate;
    nsecond=nom;
  }
  else if (rate > first) {
    second=first;
    first=rate;
    nsecond=nfirst;
    nfirst=nom;
  }
}
int main () {
  cin >> k >> first >> second;
  if (first<second){
    swap(first, second)
    nfirst=2;
    nsecond=1;
  }

  for (i=2;i<=k;i++){
    cin >> r;
    check_contest(r,i);

  }

  cout << nfirst << ' ' << nsecond << endl;

  return 0;
}
