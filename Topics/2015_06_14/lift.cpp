#include <iostream>
using namespace std;

long long F[4], E[22], m, n, u, d, L, i, best_price;
void get_etaj(long long s, long long from){
  long long i;
  for (i=0;i<L+2;i++) {
    if (E[i]>=s) break;
  }
  if (E[i]==s) {F[from]=F[from+1]=s;}
  else {
    F[from+1]=E[i];
    F[from]=E[i-1];
  }
}

int main () {
  cin >> m >> n >> u >> d >> L;
  for (i=1;i<=L;i++){cin>>E[i];}
  E[0]=-200000;
  E[L+1]=200000;
  get_etaj(m,0);
  get_etaj(n,2);

  cout << F[0]<<' '<< F[1]<<' '<< F[2]<<' '<< F[3]<<endl;
  if (m>n) {best_price=(m-n)*d;}
  else {best_price=(n-m)*u;}

  i=(m-F[0])*d+(n-F[2])*u;
  if (i<best_price) {best_price=i;}

  i=(m-F[0]+F[3]-n)*d;
  if (i<best_price) {best_price=i;}

  i=(F[1]-m+n-F[2])*u;
  if (i<best_price) {best_price=i;}

  i=(F[1]-m)*u+(F[3]-n)*d;
  if (i<best_price) {best_price=i;}

  cout << best_price << endl;
  return 0;
}
/**
4 9 2 1 6
1 3 6 10 11 14


*/
