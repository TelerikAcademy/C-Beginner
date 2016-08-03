#include <iostream>
using namespace std;

int main () {
  long long h[4], th[4], first, current, i, buff;
  /// четем данните
  for (i=0; i<4; i=i+1){
    cin >> h[i] >> th[i];
  }
  /// подреждаме данните
  for (first =0; first < 3; first = first + 1){
    for (current=first+1; current<4; current = current +1){
      if (h[current]>h[first]) {
        /// разменяме ги в масива с височините (h)
        buff=h[current];
        h[current]=h[first];
        h[first]=buff;
        /// разменяме ги в масива с дебелините (th)
        buff=th[current];
        th[current]=th[first];
        th[first]=buff;
        }
      else {
        if (h[current]==h[first]){
          if (th[current]>th[first]) {
            /// разменяме ги в масива с височините (h)
            buff=h[current];
            h[current]=h[first];
            h[first]=buff;
            /// разменяме ги в масива с дебелините (th)
            buff=th[current];
            th[current]=th[first];
            th[first]=buff;
          }
        }
      }
    }

  }
  /// отпечатваме данните
  for (i=0; i<4; i=i+1){
    cout << h[i] << " " << th[i] << endl;
  }
  return 0;
}
