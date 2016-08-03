#include <iostream>
using namespace std;

long long fib(long long nom){
  if (nom > 2) return fib(nom-1)+fib(nom-2);
  else return 1;
}

int main () {
  long long n;
  cin >> n;
  cout << fib(n) << endl;
  return 0;
}
