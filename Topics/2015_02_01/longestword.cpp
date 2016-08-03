#include <iostream>
#include <cstring>
using namespace std;

int main () {
  long long n, nay_dylga=0, i, j;
  char duma[50], nay_dylga_duma[50];

  /// Kolko dumi shte obrabotvame
  cin >> n;
  for (i=0; i<n; i++){
    cin >> duma;
    /// proveryava dali dumata e po-dulga ot nay_dulgata
    if ( strlen(duma)>nay_dylga ) {
      /// zapomnya dumata kato nay-dulga
      for (j=0; duma[j] != '\0'; j++) {
        nay_dylga_duma[j]=duma[j];
      }
      nay_dylga_duma[j]='\0';
      nay_dylga = strlen(duma);

      /// nay_dylga_duma = duma;

    }
  }

  /// otpechatva nay-dulgata duma
  cout << nay_dylga_duma << endl;
  return 0;
}
