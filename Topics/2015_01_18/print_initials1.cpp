#include <iostream>
using namespace std;

int main () {
  char name, parent_name, family;
  cout << "S koya bukva ti zapochva imeto      :";
  cin >> name;
  cout << "S koya bukva ti zapochva prezimeto  :";
  cin >> parent_name;
  cout << "S koya bukva ti zapochva familiyata :";
  cin >> family;

  cout << "Inichialite ti sa :"<<'\n'
       << name << '\t'
       << parent_name <<'\t'
       << family << '\n'
       << '\a'<< '\a'<< '\a';
  return 0;
}
