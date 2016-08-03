#include <iostream>
#include <algorithm>
using namespace std;

bool my_func(long long a, long long b){
  if (a%2>0){
    if (b%2==0) {return true;}
    else {return (a<=b);}
    }
  else {
    if (b%2==0) {return (a>=b);}
    else {return false;}
  }
}/**
 a   b    добре ли сто€т едно спр€мо друго
н.   ч.   true
н.   н.   (a<=b)
ч.   ч.   (a>=b)
ч.   н.   false

*/

int main () {
  long long  A[100];
  long long n,i;

  cin >> n;
  for (i=0;i<n;i++){
    cin >> A[i];
  }

  /// —ортирамеееее!!!
  sort(A, A+n, my_func);
  /// я да видим к'во станј !
  for (i=0;i<n;i++){
    cout << A[i] << ' ';
  }
  return 0;
}
