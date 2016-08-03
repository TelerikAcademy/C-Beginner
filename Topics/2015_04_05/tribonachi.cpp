/**
  trib(n) = trib(n-3) + trib(n-1) - trib(n-2)
    за n > 3
  trib(n) = n, за 0<n<=3

*/

#include <iostream>
using namespace std;

long long trib(long long nom){
  if (nom < 4) return nom;
  else return trib(nom-3)+trib(nom-1)-trib(nom-2);
}

int main () {
  long long  n, i;
  ///cin >> n;
  for (i=1;i<=20;i++)
  cout <<i<<"->"<<trib(i) << endl;
  return 0;
}
