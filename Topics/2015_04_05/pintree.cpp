#include <iostream>
using namespace std;

void chars(char c, long long count){
  for (;count>0; count = count - 1){cout << c;}
}

void first_row(long long spaces){
  chars(' ', spaces);
  cout << "*\n";
}

int main () {
  long long rows, levels, i;
  cin >> rows >> levels;
  /// Рисуваме етажите на борчето
  for (i=0;i<levels; i=i+1){
    /// първият ред
    first_row(rows-1);
    /// средните редове
    long long lead_blanks, inner_blanks;
    for (lead_blanks=rows-2, inner_blanks=1;
         lead_blanks>0;
         lead_blanks=lead_blanks-1, inner_blanks=inner_blanks+2)
    {
      chars(' ',lead_blanks);
      cout<<'*';
      chars(' ',inner_blanks);
      cout<<"*\n";
    }
    /// последният ред
    chars('*',2*rows-1);
    cout << endl;
  }
  /// Стеблото на борчето
  for (i=0; i<rows; i=i+1) {
    first_row(rows-1);
  }
  return 0;
}
