#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char A[100], B[100], C[100];

  strcpy(A, strcpy(B, strcpy(C, "Zdrawvey") ));

  /// A=B=C="Zdrawvey";

  cout << A << endl;
  cout << B << endl;
  cout << C << endl;
  return 0;
}
