#include <iostream>
#include <cstring>
using namespace std;

int main () {

  char A[51], B[51], Result[52], buf, znak='+';
  long long len, i, j, zaem;

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

  cout << A << endl << B << endl;

  /// Определяне на по-голямото число
  for (i=strlen(A)-1; i>=0; i=i-1){
    if (A[i]!=B[i]) break;
  }
  if (B[i]>A[i]){
    len=strlen(A);
    for (int j=0; j<len; j=j+1){
      buf=A[j];
      A[j]=B[j];
      B[j]=buf;
    }
    znak='-';
  }

  ///Изваждаме B от A поелементно
  for (i=0, zaem=0; i<50; i=i+1){
    B[i]=B[i]-'0'+zaem;
    A[i]=A[i]-'0';
    if (B[i]>A[i]){
      A[i]=A[i]+10;
      zaem=1;
      }
    else{
      zaem=0;
    }
    Result[i]=(A[i]-B[i])%10+'0';
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

  if (znak=='-') {cout<<znak;}
  cout << Result << endl;

  return 0;
}
