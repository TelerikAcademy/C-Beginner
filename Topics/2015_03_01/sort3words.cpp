#include <iostream>
#include <cstring>
using namespace std;

int main () {
  char w1[30], w2[30], w3[30], buf[30];
  cin >> w1 >> w2 >> w3;

  if (strcmp(w1,w2)>0) {
    strcpy(buf,w1);
    strcpy(w1,w2);
    strcpy(w2,buf);
  }
  if (strcmp(w1,w3)>0){
    strcpy(buf,w1);
    strcpy(w1,w3);
    strcpy(w3,buf);
  }
  if (strcmp(w2,w3)>0) {
    strcpy(buf,w2);
    strcpy(w2,w3);
    strcpy(w3,buf);
  }

  cout << w1 << " " << w2 << " " << w3 << endl;
  return 0;
}
