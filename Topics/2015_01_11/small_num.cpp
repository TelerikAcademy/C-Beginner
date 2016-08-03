#include <iostream>
using namespace std;

int main () {
  long long c[20], n , cifri, first, current,i, buff;
  cin>>n;
  //cifri = 0;
  c[0]=n%10;
  n=n/10;
  cifri =1;
  while (n>0){
    c[cifri] = n%10;
    n=n/10;
    cifri = cifri + 1;
  }
  for (first=0;first<cifri-1;first=first+1){
    for (current=first+1; current<cifri; current=current+1){
      if (c[current]<c[first]){
        buff=c[first];
        c[first]=c[current];
        c[current]=buff;
      }
    }
  }
  for (i=0; c[i]==0; i=i+1);
  buff=c[i];
  c[i]=c[0];
  c[0]=buff;

  n=0;
  for (i=0;i<cifri;i++){
    n= n*10 + c[i];
  }

  cout << n << endl;

  return 0;
}
