#include <iostream>
using namespace std;

long long A[100][100], r, c;
long long Q[20000], Qs, Qe;
long long q[20000], qs, qe;

bool da_se_raztopi(long long y, long long x){
  long long susedna_voda=0;
  if(x>0 and A[y][x-1]==0) {susedna_voda++;}
  if(x<c-1 and A[y][x+1]==0) {susedna_voda++;}
  if(y>0 and A[y-1][x]==0) {susedna_voda++;}
  if(y<r-1 and A[y+1][x]==0) {susedna_voda++;}
  return (susedna_voda>1);
}

void add_to_Q(long long y, long long x){
  Q[Qe]=y; Qe++;
  Q[Qe]=x; Qe++;
  A[y][x]=-1;
}

long long get_days(long long row,long long col){
  Qs=0;     ///изпразваме опашката Q
  Qe=0;
  add_to_Q(row,col);
  while(Qs<Qe){
    long long x,y;
    y=Q[Qs]; Qs++;
    x=Q[Qs]; Qs++;
    if(x>0 and A[y][x-1]==1) {add_to_Q(y,x-1);}
    if(x<c-1 and A[y][x+1]==1) {add_to_Q(y,x+1);}
    if(y>0 and A[y-1][x]==1) {add_to_Q(y-1,x);}
    if(y<r-1 and A[y+1][x]==1) {add_to_Q(y+1,x);}
  }
  ///for (Qs=0;Qs<Qe;Qs+=2) cout << Q[Qs]<<','<<Q[Qs+1]<<endl;

  long long d, raztopeni=0;
  for (d=0;raztopeni<Qe/2;d++){
    qs=0;qe=0;
    for (Qs=0;Qs<Qe;Qs=Qs+2){
      if (Q[Qs]>=0 and da_se_raztopi(Q[Qs],Q[Qs+1])){
        q[qe]=Q[Qs];qe++;
        q[qe]=Q[Qs+1];qe++;
        Q[Qs]=-1;
        raztopeni++;
      }
    }
    for (qs=0;qs<qe;qs=qs+2){
      A[q[qs]][q[qs+1]]=0;
    }
  }
  return d;
}

int main () {
  long long i,j,max_days=0, days;
  cin >> r >> c;
  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
      cin >> A[i][j];
    }
  }

  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
      if (A[i][j]==1) {
        ///cout << "y="<<i<<" x="<<j<<endl;
        days = get_days(i,j);
        if (days>max_days) {max_days=days;}
      }
    }
  }
  cout << max_days << endl;
  return 0;
}
/**
9	13
0	0	0	0	0	0	0	0	0	0	0	0	0
0	1	1	0	0	0	0	0	0	0	0	0	0
0	1	1	0	0	1	1	0	0	0	0	0	0
0	1	1	0	0	1	1	1	0	0	0	0	0
0	0	0	0	0	1	1	1	0	1	1	1	0
0	0	0	0	0	0	1	0	0	1	1	1	0
0	0	0	0	0	0	0	0	0	1	1	1	0
0	0	0	0	0	0	0	0	0	1	1	1	0
0	0	0	0	0	0	0	0	0	0	0	0	0
*/
