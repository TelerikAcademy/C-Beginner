#include <iostream>
#include <cstring>
using namespace std;

int main () {

  char A[51], B[51], Result[52], buf;
  long long len, i, j, prenos;

  cin >> A >> B;
  ///cout << "A[0]="<<A[0]<<" B[0]="<< B[0]<<endl;

  ///Обръщаме цифрите в записа на А наопаки
  len = strlen(A);
  for(i=0, j=len-1; i<j; i=i+1, j=j-1){
    buf=A[i];
    A[i]=A[j];
    A[j]=buf;
  }
  /// Дописваме водещи 0
  for (i=len; i<50; i=i+1) {
    A[i]='0';
  }
  A[i]='\0';
  ///Обръщаме цифрите в записа на B наопаки
  len = strlen(B);
  for(i=0, j=len-1; i<j; i=i+1, j=j-1){
    buf=B[i];
    B[i]=B[j];
    B[j]=buf;
  }
  /// Дописваме водещи 0
  for (i=len; i<50; i=i+1) {
    B[i]='0';
  }
  B[i]='\0';
  ///Събираме А и В поелементно
  for (i=0, prenos=0; i<50; i=i+1){
    Result[i]=(A[i]-'0')+(B[i]-'0')+prenos;
    if (Result[i]>9) {prenos=Result[i]/10;}
    else {prenos = 0;}
    Result[i]=(Result[i]%10+'0');
  }
  if (prenos>0){
    Result[i]=prenos+'0';
    i=i+1;
  }
  Result[i]='\0';
  /// Премахваме водещите 0 в резултата
  for (i=strlen(Result)-1; i>0; i=i-1){
    if (Result[i]=='0') {Result[i]='\0';}
    else {break;}
  }
  /// Обръщаме резултата огледално
  len = strlen(Result);
  for(i=0, j=len-1; i<j; i=i+1, j=j-1){
    buf=Result[i];
    Result[i]=Result[j];
    Result[j]=buf;
  }


  cout << A << endl << B << endl << Result << endl;

  return 0;
}
