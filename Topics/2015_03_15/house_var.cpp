#include <iostream>
using namespace std;
void print_chars (char c, long long count){
  for(;count>0;count--) {cout<<c;}
}
void print_roof(long long h){
  long long spaces,sp_between, i;
  /// печати най-горния ред;
  print_chars(' ',h);
  cout<<"#\n";
  /// печати средните редове
  for (i=1, spaces=h-1, sp_between=1;i<h;i++,spaces--,sp_between+=2) {
    print_chars(' ',spaces);
    cout<<'#';
    print_chars(' ',sp_between);
    cout<<"#\n";
  }
  print_chars('#',sp_between+2);
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
