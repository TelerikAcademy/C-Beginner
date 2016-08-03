#include <iostream>
using namespace std;

long long fib(long long n){
  if (n>2) {return fib(n-1)+fib(n-2);}
  else {return 1;}
}
int main () {
  long long p;
  cin >> p;
  cout << fib(p) << endl;
  return 0;
}
