#include <iostream>
using namespace std;

int main () {
  long long uspech[17], nomer, suma;

  for (nomer=0; nomer<17; nomer = nomer+1){
    cout << "Vuvedi uspeha za "<<nomer<<" uchenik:";
    cin >> uspech[nomer];

  }

  for (nomer=0; nomer<17; nomer = nomer+1){

    if (uspech[nomer]<6) {
      uspech[nomer] = uspech[nomer] + 1;

    }

  }

  for (nomer=0; nomer<17; nomer = nomer+1){
    cout <<"Uspehut na uchenik "<< nomer<< " e "
         << uspech[nomer]<<endl;

  }

  for (suma=0, nomer=0; nomer<17; nomer = nomer+1){
    suma = suma + uspech[nomer];

  }

  cout << "Sreden uspeh na klasa: "<<suma/17.0 << endl;



  return 0;
}
