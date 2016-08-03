#include <iostream>
using namespace std;

void print_romb(){
  cout<<"   *\n";
  cout<<"  * *\n";
  cout<<" *   *\n";
  cout<<"*     *\n";
  cout<<" *   *\n";
  cout<<"  * *\n";
  cout<<"   *\n";
}

void p7s(){
  cout << "*******\n";
}
void print_kvadrat(){
  p7s();
  cout << "*     *\n";
  cout << "*     *\n";
  p7s();
}

int main () {
  long long code_shape, count_shapes;
  long long next=1;

  while (next > 0) {
    cout << "Kakvo da se pechati - romb (1) ili kvadrat (2)";
    cin >> code_shape;
    if (code_shape<1 or code_shape>2){cout << "Greshen izbor. Opitay pak.\n";}
    else {
      cout << "Kolko puti da se pechati? ";
      cin >> count_shapes;
      while (count_shapes>0){
        if (code_shape == 1) {print_romb();}
        else {print_kvadrat();}
        count_shapes=count_shapes-1;
      }
    }
  }
  return 0;
}
