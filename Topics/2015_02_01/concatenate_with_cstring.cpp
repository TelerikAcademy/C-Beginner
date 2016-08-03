#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[10], w2[10];

  cin >> w1 >> w2;

  int i, j;
  ///for (i=0; w1[i]>'\0'; i++);  /// i=i+1;

  i = strlen(w1);
  j = strlen(w2);

  if (i+strlen(w2)<10) {

    strcat(w1,w2);

  }
  else {
    cout << "Pyrwata duma e ot "<<i<<" simvola\n"<<
            "Wtorata duma e ot "<<j<<" simvola\n";
    cout << "Nyama myasto za slepwane na dwete dumi\n";
  }
  cout << w1 << endl;

  return 0;
}

