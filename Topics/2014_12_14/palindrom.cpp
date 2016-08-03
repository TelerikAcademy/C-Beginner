#include <iostream>
using namespace std;

int main () {
  long long A[15], br_ednakvi, nomer;
  for (nomer=0; nomer<15; nomer = nomer+1){
    cin >> A[nomer];
  }

  ///Броим двойки едннакви числа
  long long nachalno, krajno;
  br_ednakvi = 0;
  for (nachalno = 0, krajno = 14;
       nachalno<krajno;
       nachalno = nachalno+1, krajno=krajno-1){

    if (A[nachalno]==A[krajno]) {
      br_ednakvi = br_ednakvi + 1;
    }

  }

  if (br_ednakvi==7) {
    cout << "YES"<<endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
