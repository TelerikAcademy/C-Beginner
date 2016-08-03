#include <iostream>
using namespace std;

int main () {
  long long A[10], brown, blue;

  /// Чете числата

  for (brown = 9; brown >= 0; brown = brown - 1){
    cin >> A[brown];
  }


  /// Печата 3-то и 6-то
  cout << A[2] << " " << A[5] << endl;

  return 0;
}
