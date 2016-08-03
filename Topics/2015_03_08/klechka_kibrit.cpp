#include <iostream>
using namespace std;

void prn_chars(char c, long long n){
  for (long long i=0;i<n;i=i+1) {cout << c;}
}


void prn_head(long long w){
  ///cout << "Glava\n";
  for (long long i=0;i<w;i=i+1){
    prn_chars('*',w);
    cout << endl;
  }
}

void prn_manip(long long  h, long long toright){
  ///cout << "Drujka\n";
  for (long long i=0;i<h;i=i+1){
    prn_chars(' ',toright);
    cout<<"|\n";
  }
}

int main () {
  long long w,h,polojenie, i;
  cout << "Nagore (1) ili nadolu (2) s glavata, lyavolegnala (3) ili dyasnolegnala (4)? ";
  cin >> polojenie;
  cout << "Kolko e shiroka klechkata? ";
  cin >> w;
  cout << "Kolko e wisoka drujkata na klechkata? ";
  cin >> h;
  if (polojenie == 1) {  /// Nagore
    prn_head(w);
    prn_manip(h,(w-1)/2);
  }
  else if (polojenie== 2) { /// Nadolu
    prn_manip(h,(w-1)/2);
    prn_head(w);
  }
  else if (polojenie== 3) {  /// lyavo legnala
    long long i;
    for (i=0;i<w; i=i+1){
      prn_chars('*',w);
      if (i==w/2) {prn_chars('-',h);}
      cout << endl;
    }
  }
  else if (polojenie== 4) { /// dyasno legnala
    long long i;
    char lead_char;
    for (i=0;i<w; i=i+1){
      if (i==w/2) {lead_char='-';}
      else {lead_char=' ';}
      prn_chars(lead_char,h);
      prn_chars('*',w);
      cout << endl;
    }
  }
  else {
    cout << "Greshno polojenie\n";
  }

  return 0;
}
