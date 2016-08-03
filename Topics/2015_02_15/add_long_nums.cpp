#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char A[51], B[51], Result[52], buf;
  cin >> A >> B;

  long long len, i, j;
  /// Обръща наопаки A
  len = strlen(A);
  for (i=0,j=len-1; i<j; i=i+1, j=j-1){
    buf = A[i];
    A[i]=A[j];
    A[j]=buf;
  }
  /// Обръща наопаки B
  len = strlen(B);
  for (i=0,j=len-1; i<j; i=i+1, j=j-1){
    buf = B[i];
    B[i]=B[j];
    B[j]=buf;
  }
  /// Допълва A с водещи 0
  for (i=strlen(A);i<50;i=i+1){
    A[i]='0';
  }
  A[50]='\0';
  /// Допълва B с водещи 0
  for (i=strlen(B);i<50;i=i+1){
    B[i]='0';
  }
  B[50]='\0';
  /// Събира A с B и помества резултата в Result
  long long prenos=0;
  for (i=0; i<strlen(A); i=i+1){
    Result[i]=(A[i]-'0')+(B[i]-'0')+prenos;
    if (Result[i]>=10){
      prenos = Result[i]/10;
      }
    else {
      prenos=0;
    }
    Result[i]=(Result[i]%10)+'0';
  }
  if (prenos>0) {
    Result[i]=prenos+'0';
    i=i+1;
  }
  Result[i]='\0';

  /// Премахва водещите 0 от Result
  for(i=i-1; i>=0; i=i-1){
    if (Result[i]>'0') break;
    Result[i]='\0';
  }
  /// Ако Result е останал празен - връща в него една 0
  len = strlen(Result);
  if (len==0){
    strcpy(Result,"0");
  }
  /// Обръща цифрите в Result наопаки
  for (i=0,j=len-1; i<j; i=i+1, j=j-1){
    buf = Result[i];
    Result[i]=Result[j];
    Result[j]=buf;
  }


  cout << Result << endl;
  return 0;
}
