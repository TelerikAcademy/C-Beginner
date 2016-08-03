#include <iostream>
using namespace std;

long long yaica(long long n){
  if (n>1) return (yaica(n-1)+4);
  else return 5;
}

int main () {
  long long day;
  cin >> day;
  cout << yaica(day-2) << endl;
  return 0;
}
