#include <iostream>
using namespace std;

bool A[8][8], visited[8];

void read_graph(){
  long long a,b;
  while (cin>>a>>b) {
    A[a-1][b-1]=true;
    A[b-1][a-1]=true;
  }
}

void print_A(){
  long long i,j;
  for (i=0;i<8; i++){
    for (j=0;j<8;j++) {cout<<A[i][j]<<' ';}
    cout << endl;
  }
}

void DFS(long long start){
  visited[start]=true;
  cout << "Stupvam v "<<start<<endl;
  for (long long i=0;i<8;i++) {
    if (A[start][i]==true and visited[i]==false) {
      DFS(i);
    }
  }
  cout << "Vrushtam se ot "<<start<<" v po-preden\n";
}

int main () {
  read_graph();
  print_A();
  DFS(1);
  return 0;
}
/*
1 2
1 3
3 2
1 6
3 4
4 5
6 7
7 8
6 8
*/
