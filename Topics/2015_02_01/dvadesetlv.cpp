#include <iostream>
#include <cstring>

using namespace std;

int main () {
  char kolko_leva[30];
  cin >> kolko_leva;
  strcat(kolko_leva," leva");
  cout << kolko_leva << endl;
  return 0;
}
