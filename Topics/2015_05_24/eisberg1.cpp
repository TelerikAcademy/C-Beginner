#include <iostream>
using namespace std;

long long A[100][100], r, c;
long long Q[20000], Qs, Qe;
long long q[20000], qs, qe;

bool da_se_raztopi(long long y, long long x){
  long long susedna_voda=0;
  if (x>0 and A[y][x-1]==0) {susedna_voda++;}
  if (x+1<c and A[y][x+1]==0) {susedna_voda++;}
  if (y>0 and A[y-1][x]==0) {susedna_voda++;}
  if (y+1<r and A[y+1][x]==0) {susedna_voda++;}
  return (susedna_voda>1);
}

void add_to_Q(long long row, long long col){
  Q[Qe]=row;
  Q[Qe+1]=col;
  Qe+=2;
  A[row][col]=-1;
}

long long get_days(long long row,long long col){
  long long y, x, raztopeni=0, d;
  Qs=Qe=0;
  add_to_Q(row,col);
  for ( ;Qs<Qe;Qs=Qs+2) {
    y=Q[Qs];
    x=Q[Qs+1];
    if (x>0 and A[y][x-1]==1) {add_to_Q(y,x-1);}
    if (x+1<c and A[y][x+1]==1) {add_to_Q(y,x+1);}
    if (y>0 and A[y-1][x]==1) {add_to_Q(y-1,x);}
    if (y+1<r and A[y+1][x]==1) {add_to_Q(y+1,x);}
  }

  for (d=0; raztopeni < Qe/2; d=d+1){
    for (qs=qe=Qs=0;Qs<Qe;Qs+=2){
      y=Q[Qs];
      x=Q[Qs+1];
      if (y>=0 and da_se_raztopi(y,x)){
        q[qe]=y;
        qe++;
        q[qe]=x;
        qe++;
        Q[Qs]=-1;
        raztopeni++;
      }
    }
    for (qs=0;qs<qe;qs+=2) {A[  q[qs]  ][  q[qs+1]  ]=0;}
  }
  return d;
}

int main () {
  long long i,j,days,max_days=0;
  ///четем вх. данни
  cin >> r >> c;
  for (i=0; i<r; i++){
    for (j=0; j<c; j++){
      cin >> A[i][j];
    }
  }

  for (i=0; i<r; i++){
    for (j=0; j<c; j++){
      if (A[i][j]==1) {
        days=get_days(i,j);
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
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	1	1	1	1	1	1	1	1	1	1	0
0	0	0	0	0	0	0	0	0	0	0	0	0
*/
