#include <iostream>
using namespace std;

int main () {
  long long n, week, day;
  cin >> n;
  /// определяме номер на седмица
  week = n/30;
  if (n%30 > 0) {
    week = week + 1;
  }
  if (week > 8) {
    week = week + 1;
  }
  /// определяме номер на ден
  if (n%30 > 0) {
    day = (n%30) / 6;
    if ((n%30)%6 > 0) {
      day = day + 1;
    }
    }
  else {
    day = 5;  /// 30-ти урок за някоя седмица -> последният в петък!
  }
  /// Отпечатваме резултата
  cout << "Week "<<week<<" ";
  /*
  if (day == 1){cout << "Monday";}
  else {
    if (day == 2) {cout << "Tuesday";}
    else {
      if (day == 3) {cout << "Wednesday";}
      else {
        if (day == 4) {cout << "Thursday";}
        else {cout << "Friday";}
      }
    }
  }
  */
  if (day == 1) cout << "Monday";
  else if (day == 2) cout << "Tuesday";
  else if (day == 3) cout << "Wednesday";
  else if (day == 4) cout << "Thursday";
  else cout << "Friday";



  cout << endl;
  return 0;
}
