#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char A[61];
  cin.getline(A,60);
  long long i, len=strlen(A);
  for (i=0; A[i] != '\0'; i=i+1);
  len = i;
  for (i=0;i<len+2;i=i+1){cout<<'*';}
  cout<<"\n*"<<A<<"*\n";
  for (i=0;i<len+2;i=i+1){cout<<'*';}
  cout << endl;
  return 0;
}
