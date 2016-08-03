#include <iostream>
using namespace std;

void print_chars(char c,long long br){
  for (;br>0;br--) cout << c;
}

void print_roof(long long h){
  long long lead_spaces, spaces_between, i;
  /// печати първия ред
  print_chars(' ',h);
  cout<<"#\n";
  /// печати междинните редове
  for (i=1, lead_spaces=h-1, spaces_between=1;
       i<h;
       i++, lead_spaces--, spaces_between+=2
      ){
    print_chars(' ',lead_spaces);
    cout<<'#';
    print_chars(' ',spaces_between);
    cout<<"#\n";
  }
  /// печати финалния ред
  print_chars('#',spaces_between+2);
  cout<<endl;
}

void  print_body(long long h){
  for (long long i=0;i<h-1;i++) {
    cout<<" *";
    print_chars(' ', 2*h-3);
    cout<<"*\n";
  }
  cout<<' ';
  print_chars('*', 2*h-1);
  cout<<endl;
}

int main () {
  long long h;
  cin>>h;
  print_roof(h);
  print_body(h);
  return 0;
}
