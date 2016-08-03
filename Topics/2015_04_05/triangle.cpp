#include <iostream>
using namespace std;

void chars(char c, long long count){
  for (;count>0; count = count - 1){cout << c;}
}
void stars_with_space(long long count){
  for (;count>0; count = count - 1){cout << "* ";}
}


int main () {
  long long n, lead_spaces, star_space;
  cin >> n;
  for(lead_spaces=n-1, star_space=0;
      lead_spaces>=0;
      lead_spaces=lead_spaces-1, star_space=star_space+1){
    chars(' ', lead_spaces);
    stars_with_space(star_space);
    cout<<"*\n";
  }
  return 0;
}
