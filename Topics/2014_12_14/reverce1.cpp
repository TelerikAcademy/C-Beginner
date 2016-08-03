#include <iostream>
using namespace std;

int main () {
  long long Masiv[10], A, B, i, brown, blue, buff;

  cin >> A >> B;
  ///Четем десетте числа
  for (i=0;i<10;i=i+1){
    cin >> Masiv[i];
  }

  /// Обръщаме реда в масива Masiv
  for (brown=0, blue=9; brown<blue ; brown = brown+1,
                                     blue = blue-1)
  {
    buff = Masiv[brown];
    Masiv[brown]=Masiv[blue];
    Masiv[blue]=buff;
  }
  /*
  for (i=0;i<10;i=i+1){
    cout << Masiv[i] << endl;
  }
  */

  /// Печатим търсените числа
  cout << Masiv[A-1] << " " << Masiv[B-1] << endl;

  return 0;
}
