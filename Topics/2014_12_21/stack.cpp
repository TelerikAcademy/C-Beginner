#include <iostream>
using namespace std;

int main () {
  long long deca[30];
  long long n, top, i, poredna_danna;

  top=0;
  cout << "Broy hora:";
  cin >> n;

  for (i=0;i<n;i=i+1){
    cout << "Wuzrastta na "<<i+1<<"chovek e: ";
    cin >> poredna_danna;
    if (poredna_danna <=12 ) {
      deca[top] = poredna_danna;
      top = top + 1;
    }
  }

  cout << "Decata sa na vuzrast"
       << "(obratno na reda na zapiswane): ";
  while (top > 0) {
    top = top-1;
    cout << deca[top] << " ";
  }

  return 0;
}
/**
8
10 11 45 12 12 65 9 893
*/
