#include <iostream>
#include <algorithm>
using namespace std;
long long rate[10000], order[10000], k, i, j, buf;


int main () {
  cin >> k;
  for (i=0;i<k;i++){
    cin >> rate[i];
    order[i]=i+1;
  }
  /// Сортираме
  for (i=0;i<k-1;i++) for (j=i+1;j<k;j++)
    if (rate[j]>rate[i]){
      swap(rate[j], rate[i]);
      swap(order[j], order[i]);
    }
  cout << order[0] << ' ' << order[1] << endl;
  return 0;
}
