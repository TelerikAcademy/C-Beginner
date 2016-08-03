#include <iostream>
using namespace std;
void print_chars(char c,long long br){
  for (;br>0;br--) cout << c;
}


int main () {
  long long br_chars, i, j, lc, sh;
  char c;
  cin >> br_chars >> c;
  for (i=0,lc=br_chars-1, sh=1;i<br_chars;i++,lc--,sh+=2){
    print_chars(' ', lc);
    print_chars(c, sh);
    cout<<endl;
  }
  for (i=1, lc=1, sh-=4;i<br_chars;i++,lc++,sh-=2){
    print_chars(' ', lc);
    print_chars(c, sh);
    cout<<endl;
  }
  return 0;
}
