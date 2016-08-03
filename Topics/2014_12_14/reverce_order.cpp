#include <iostream>
using namespace std;

int main () {
  long long A[10], brown, blue;

  /// Чете числата
  for (brown = 0; brown < 10; brown = brown + 1){
    cin >> A[brown];
  }



  /// Обръща реда им
  for (brown = 0, blue = 9;
       brown < blue;
       brown = brown + 1, blue = blue - 1){
    long long buff;
    buff = A[brown];
    A[brown]=A[blue];
    A[blue] = buff;
  }
  /// Печата 3-то и 6-то
  cout << A[2] << " " << A[5] << endl;

  return 0;
}
