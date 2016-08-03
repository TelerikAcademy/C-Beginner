/**
  Да се напише програма, която прочита името и фамилията
  на човека, пишещ с клавиатурата и отпечатва тези две
  имена в обратен ред, т.е. в "стил Джеймс Бонд" :-)
  (Бонд Джеймс (Бонд) )

*/
#include <iostream>
using namespace std;

int main () {
  long long i;
  char name[30],   /// масивче за името
       fname[30];  /// масивче за фамилията
  cout << "Vuvedi imeto i familiyata si: ";

  cin >> name;
  cin >> fname;
  /// Преобразува фамилията в главни
  for (i=0; fname[i] != '\0' ; i=i+1){
    if (fname[i]>='a' and fname[i]<='z') {
      fname[i] = fname[i] - ('b'-'B');
    }
  }
  /// Преобразува името в малки
  for (i=0; name[i] != '\0' ; i=i+1){
    if (name[i]>='A' and name[i]<='Z') {
      name[i] = name[i] + ('b'-'B');
    }
  }
  /// Преобразува първия знак от името в главна
  name[0] = name[0]-('b'-'B');

  cout << "Ti se kazvash: ";
  cout << fname << " ";
  cout << name;


  return 0;
}
