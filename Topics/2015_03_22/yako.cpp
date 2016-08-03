///123456 899
#include <iostream>
using namespace std;

long long yakost(long long a){
  if (a==0) {return 0;}
  long long sum=0;
  while (a>0){
    sum = sum + a%10;
    a = a/10;
  }
  return sum;
}

int main () {
  long long n, i, chislo, max_yako=0;
  cin >> n;
  for (i=0;i<n;i++){
    cin >> chislo;
    if (yakost(chislo)>yakost(max_yako)) {
      max_yako = chislo;
    }
  }
  cout << max_yako << endl;
  return 0;
}
