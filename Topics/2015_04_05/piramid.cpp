#include <iostream>
using namespace std;
int n,m,q;

double press(int r, int c){
  return q+(c>1?pres(r-1,c-1):0)/2.0
         +(c<r?pres(r-1,c):0)/2.0;
}

int main () {
  cin>>n>>q>>m;
  cout<<pres(n,m)<<endl;

  return 0;
}
