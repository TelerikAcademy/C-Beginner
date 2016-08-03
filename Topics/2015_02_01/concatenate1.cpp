#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[10], w2[10];

  cin >> w1 >> w2;


  if (strlen(w1)+strlen(w2)<10){
    strcat(w1, w2);
    }
  else {
    cout << "Nyama myasto za slepvaneto\n";
  }

  /**
  /// Къде е "терминиращата" нула
  long long i, j;
  for (i=0; w1[i] != '\0'; i=i+1);

  /// Прехвърляме (копираме) буквите от w2 в w1
  for (j=0; w2[j] != '\0'; j=j+1, i=i+1){
    w1[i]=w2[j];
  }
  w1[i]='\0';
  */


  cout << w1 << endl;

  return 0;
}
