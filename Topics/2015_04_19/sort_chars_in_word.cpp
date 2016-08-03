#include <iostream>
using namespace std;

int main () {
  char A[31];

  long long n=0, B[256], i;

  cin >> A;
  for (i=0;i<256;i++) {B[i]=0;}
  for (i=0;A[i]!='\0';i++){
    n++;
    B[  A[i]   ]++;
  }
  for (i=255;n>0;i--){
    while(B[i]>0){
      cout<<(char)i;
      B[i]--;
      n--;
    }
  }
  return 0;
}
