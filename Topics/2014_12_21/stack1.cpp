#include <iostream>
using namespace std;

int main () {
  long long deca[20], top, n, godini, i;

  cin>>n;  /// хората в залата
  top = 0;
  for(i=0;i<n;i=i+1){
    cin >> godini;
    if (godini <= 13) {
      deca[top] = godini;
      top = top +1;
    }
  }

  for (i=top-1;i>=0; i=i-1) {
    cout << deca[top-1]<<" ";
    top = top-1;
  }
  cout << endl;
  return 0;
}
