/**
Всеки ден изяждате с 2 ябълки повече от
вчерашния ден. Първия ден сте изяли 3 ябълки.
Колко ябълки сте изяли n-я ден? (n<366) n се
чете от клавиатурата.
*/

#include <iostream>
using namespace std;

long long apples(long long day){
  if (day>1) {return apples(day-1)+2;}
  else {return 3;}
}
int main () {
  long long n;
  cin >> n;
  cout << apples(n) << endl;

  return 0;
}
