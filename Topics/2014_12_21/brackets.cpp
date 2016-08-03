#include <iostream>
using namespace std;

int main () {
  long long
    otvaryashti[100], /// стекът с отварящите скоби
    top,              /// "върхът" на стека
    n,                /// брой числа-скоби
    i,                /// брояч на цикъл for
    bracket;          /// поредно число-скоба

  cin >> n;
  top=0;
  for (i=0; i<n; i=i+1){
    cin>>bracket;
    if (bracket==0){
      otvaryashti[top]=bracket;
      top=top+1;
      }
    else {
      if (top==0){
        cout << "NO! (nyama predishna otvaryashta)"<<endl;
        return 0;
        }
      else {
        top = top-1;
      }
    }
  }

  if (top>0){
    cout << "NO! (lipsvat "<<top<<" zatvaryashti\n";
    }
  else {
    cout << "YES!\n";
  }

  return 0;
}
