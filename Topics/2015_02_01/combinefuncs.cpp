#include <iostream>
#include <cstring>

using namespace std;

int main () {
  char A[100], B[100];

  B[0] = '\0';

  strcat(B, strcpy(A,"Zdravey Telerik") );

  cout << B << endl;

  return 0;
}
