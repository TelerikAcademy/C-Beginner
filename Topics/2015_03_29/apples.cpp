/**
����� ��� �������� � 2 ������ ������ ��
��������� ���. ������ ��� ��� ����� 3 ������.
����� ������ ��� ����� n-� ���? (n<366) n ��
���� �� ������������.
*/

#include <iostream>
using namespace std;

long long apples(long long day){
  if (day>1) {return apples(day-1)+2;}
  else {return 3;}
}
int main () {
  long long n;
  cin >> n;
  cout << apples(n) << endl;

  return 0;
}
