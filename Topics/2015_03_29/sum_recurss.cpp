#include <iostream>
using namespace std;

long long A[100], n;

void read_data(long long br){
  for (;br>0;br=br-1){
    cin >> A[br-1];
  }
}

long long sum_A (long long kolko){
  if (kolko > 1) return sum_A(kolko-1)+A[kolko-1];
  else return A[0];
}

int main () {
  cin>> n;
  read_data(n);
  cout << sum_A(n) << endl;
  return 0;
}
