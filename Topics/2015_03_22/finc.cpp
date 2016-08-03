#include <iostream>
using namespace std;
/*
тип име_на_функция(списък с параметри){
  /// тук се пишат действията за получаване
  /// на стойността
  return стойността;
}
*/
double sum2nums(double a, double b){
  double r;
  r = a+b;
  return r;
}

double sub2nums(double a, double b){
  double r;
  r = a-b;
  return r;
}

double pro2nums(double a, double b){
  double r;
  r = a*b;
  return r;
}

double div2nums(double a, double b){
  double r;
  r = a/b;
  return r;
}


int main () {
  double num1, num2, num3;
  while (1==1) {
    cout << "Vuvedi 2 chisla: ";
    cin >> num1 >> num2;
    cout << "Posocji dejstvie (+-*/):";
    char znak;
    cin >> znak;
    if (znak=='+') {cout << "Sumata im e "<<sum2nums(num1,num2)<<endl;}
    else if (znak=='-') {cout << "Razlikata im e "<<sub2nums(num1,num2)<<endl;}
    else if (znak=='*') {cout << "Proizvedenieto im e "<<pro2nums(num1,num2)<<endl;}
    else if (znak=='/') {cout << "Chastnoto im e "<<div2nums(num1,num2)<<endl;}
    else {cout << "Nepravilna operaciq\n";}
    ///cout << sum2nums(sum2nums(num1, num2),num3) << endl;
  }

  return 0;
}
