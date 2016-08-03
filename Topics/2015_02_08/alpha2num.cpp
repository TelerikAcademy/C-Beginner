#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char A[20];
  long long i, result, from=0;

  cin >> A;

  if (A[0]=='+' or A[0]=='-') {
    from = 1;
  }
  for (i=from; A[i] != '\0'; i++) {
    if (A[i]<'0' or A[i]>'9') {break;}
  }

  if (i<strlen(A) or (strlen(A)==1 and from==1)) {
    cout << "Not number\n";
    }
  else {
    result = 0;
    for (i=from; A[i] != '\0'; i++){
      result = result * 10;
      result = result + (A[i]-'0');
    }
    if (A[0]=='-') {result = -result;}
    cout << "The number is " << result << endl;
  }

  return 0;
}
