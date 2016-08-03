#include <iostream>
#include <cstring>
using namespace std;

int main () {

  char A[100];
  strcpy(A,"");

  cin.getline(A,99);

  cout << A << endl;


  return 0;
}
