#include <iostream>
using namespace std;

int main () {
  long long n, big, small, c[3], first, current, buff, i;
  cin >> n;
  c[2]=n%10;
  n = n / 10;
  c[1] = n%10;
  c[0] = n/10;
  /// подреждаме в намаляващ ред цифрите записани в c[]
  for (first = 0; first < 2; first = first+1){
    for(current = first+1; current < 3; current = current +1){
      if (c[current ]>c[first]) {
        buff = c[first];
        c[first]=c[current];
        c[current]=buff;
      }
    }
  }
  /// "сглобяваме" трицифрено число от цифрите записани в c[]
  big = c[0]*100+c[1]*10+c[2];
  /// пренареждаме цифрите в c[] в увеличаващ ред
  buff=c[0];
  c[0]=c[2];
  c[2]=buff;
  /// проверяваме за водещи нули и ако има да ги направим по-десни
  for (i=0;c[i]==0;i=i+1);
  buff=c[i];
  c[i]=c[0];
  c[0]=buff;
  ///"сглобяваме" трицифрено число от цифрите записани в c[]
  small = c[0]*100+c[1]*10+c[2];

  /// печатим резултата
  cout << big-small<<endl;
  return 0;
}
