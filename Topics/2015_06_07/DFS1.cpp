#include <iostream>
using namespace std;
#define N 11
bool A[N][N], visited[N];

void read_graph(){
  long long a,b;
  while (cin>>a>>b){
    A[a][b]=true;
    A[b][a]=true;
  }
}

void print_A(){
  long long i,j;
  for (i=0;i<N;i++){
    for (j=0;j<N;j++) {cout << A[i][j]<<' ';}
    cout<<endl;
  }
}

void DFS(long long  start){
  visited[start]=true;
  cout << "Stupnah v "<<start<<endl;
  for (long long i=0; i<N; i++ )
    if (A[start][i] and !visited[i]) DFS(i);
  cout << "Vrushtam se ot "<<start<< " v po-predishen\n";
}

int main () {
  read_graph();
  print_A();
  DFS(0);
  return 0;
}
/*
0 1
0 2
0 3
0 4
1 3
1 4
2 3
3 4
3 5
3 6
6 7
7 8
7 9
8 9
0 10
*/
