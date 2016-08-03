#include <iostream>
using namespace std;

long long kg_apples(long long money){
  if (money < 3) return money;
  ///if (money == 2) return 2;
  if (money%3==0) return 3*kg_apples(money/3)+1;
  /**if (money%3==1) return kg_apples(money-1)+1;
  return kg_apples(money-2)+2;
  */
  return kg_apples(money-money%3)+money%3;
}

int main () {
  long long x;
  cin >> x;
  cout << kg_apples(x) << endl;
  return 0;
}
