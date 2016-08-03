#include <iostream>
using namespace std;

int main () {

  char A[100];

  A[0]='H';
  A[1]='e';
  A[2]='l';
  A[3]='l';
  A[4]='o';
  A[5]='\0';

  cout << A;

  cin >> A;
  cout << "Toku shto vuvede : " << A;

  return 0;
}
