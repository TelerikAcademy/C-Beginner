#include <iostream>
using namespace std;
long long apples(long long money){
  if (money<3) {return money;}
  else {
    if (money%3==0) {return 3*apples(money/3)+1;}
    else {return apples(money-money%3) + money%3;}
  }
}

int main () {
  long long x;
  cin >> x;
  cout<<apples(x)<<endl;
  return 0;
}
