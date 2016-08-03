#include <iostream>
using namespace std;

double pro2nums(double a, double b){
  double r;
  r = a*b;
  return r;
}


int main () {
  double a,b,c;
  cin>>a>>b>>c;
  cout << (pro2nums(a,b)+pro2nums(b,c)+
           pro2nums(c,a))*2 << endl;
  return 0;
}
