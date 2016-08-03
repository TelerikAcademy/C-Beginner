/**
  Да се напише програма, която прочита името и фамилията
  на човека, пишещ с клавиатурата и отпечатва тези две
  имена в обратен ред, т.е. в "стил Джеймс Бонд" :-)
  (Бонд Джеймс (Бонд) )

*/
#include <iostream>
using namespace std;

int main () {
  char name[30],   /// масивче за името
       fname[30];  /// масивче за фамилията
  cout << "Vuvedi imeto i familiyata si: ";

  cin >> name;
  cin >> fname;


  cout << "Ti se kazvash: ";
  cout << fname << " ";
  cout << name;


  return 0;
}
