#include <iostream>
using namespace std;

void print_diamond(){
  int i,j, k;

  for ( i=4;i>0;i=i-1) {cout<<' ';}
  cout<<"*\n";
  for (j=0,k=1;j<4;j=j+1, k=k+2){
   for(i=3-j;i>0;i=i-1) {cout << ' ';}
   cout<<'*';
   for(i=j+1;i>0;i=i-1) {cout << ' ';}
   cout << "*\n";
  }
  for (j=1 ;j<4;j=j+1, k=k-2){
   for(i=0;i<j;i=i+1) {cout << ' ';}
   cout<<'*';
   for(i=0;i<k;i=i=1) {cout << ' ';}
   cout << "*\n";
  }

}

int main () {

  print_diamond();


  return 0;
}
