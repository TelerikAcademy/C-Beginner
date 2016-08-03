/*
10
2 3 4 3 2 6 7 8 4 2
*/

#include <iostream>
using namespace std;

int main () {
  long long A[10];
  long long n, trojki, brojach;

  ///Чете масива
  ///cin >> n;
  for (brojach = 0; brojach < 10; brojach = brojach + 1){
    cin >> A[brojach];
  }
  /// Търси и брой тройки съседни числа
  for(trojki=0, brojach=0;
       brojach <= 10-3; brojach = brojach + 1) {

     if (A[brojach]==A[brojach+1]-1) {
       if (A[brojach+1]==A[brojach+2]-1) {
         trojki = trojki + 1;
       }
     }
     if (A[brojach]==A[brojach+1]+1) {
       if (A[brojach+1]==A[brojach+2]+1) {
         trojki = trojki + 1;
       }
     }

  }

  cout << trojki << endl;

  return 0;
}
