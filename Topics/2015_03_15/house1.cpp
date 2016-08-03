#include <iostream>
using namespace std;

void print_chars(char c,long long br){
  for (;br>0;br--) cout << c;
}

void print_roof(long long h){
  long long lead_spaces, sharps, i;
  for (i=0, lead_spaces=h, sharps=1;
       i<h;
       i++, lead_spaces--, sharps+=2
      ){
    print_chars(' ',lead_spaces);
    print_chars('#',sharps);
    cout<<endl;
  }
  print_chars('#',sharps);
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
