#include <iostream>
using namespace std;
void print_chars (char c, long long count){
  for(;count>0;count--) {cout<<c;}
}
void print_roof(long long h){
  long long spaces,tilles, i;
  for (i=0, spaces=h, tilles=1;i<h;i++,spaces--,tilles+=2) {
    print_chars(' ',spaces);
    print_chars('#',tilles);
    cout<<endl;
  }
  print_chars('#',tilles);
  cout<<endl;
}
void print_bodi(long long h){
  long long spaces_between=2*h-3;
  for (;h>1;h--){
    cout<<" *";
    print_chars(' ',spaces_between);
    cout<<"*\n";
  }
  cout<<' ';
  print_chars('*',spaces_between+2);
  cout<<endl;
}
int main () {
  long long h;
  cin >> h;
  print_roof(h);
  print_bodi(h);
  return 0;
}
