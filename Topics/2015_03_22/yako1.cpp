#include <iostream>
using namespace std;

long long yakost(long long a){
  long long sum=0;
  if (a==0) {return 0;}
  while (a !=0){
    sum = sum + a%10;
    a = a /10;
  }
  return sum;
}

int main () {
  long long n, chislo, max_yako=0, yych=0, ych;
  cin >> n;
  for (; n>0; n--){
    cin >> chislo;
    ych = yakost(chislo);
    if (ych>yych){
      max_yako = chislo;
      yych=ych;
    }
  }
  cout << max_yako << endl;
  return 0;
}
