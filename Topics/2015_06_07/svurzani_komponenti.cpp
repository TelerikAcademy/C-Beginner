#include <iostream>
using namespace std;

#define N 10

bool A[N][N], visited[N];

void read_graph(){
  long long a,b;
  while (cin>>a>>b) {
    A[a-1][b-1]=true;
    A[b-1][a-1]=true;
  }
}

void print_A(){
  long long i,j;
  for (i=0;i<N; i++){
    for (j=0;j<N;j++) {cout<<A[i][j]<<' ';}
    cout << endl;
  }
}

void DFS(long long start){
  visited[start]=true;
  ///cout << "Stupvam v "<<start<<endl;
  for (long long i=0;i<N;i++) {
    if (A[start][i]==true and visited[i]==false) {
      DFS(i);
    }
  }
  ///cout << "Vrushtam se ot "<<start<<" v po-preden\n";
}

int main () {
  read_graph();
  ///print_A();
  long long cs=0, i;
  for (i=0;i<N;i++) {
    if (!visited[i]) {
      DFS(i);
      cs++;
    }
  }
  cout << "V grafa ima "<<cs<<" svurzani komponenti\n";
  return 0;
}

/*
9 6
1 4
1 7
1 10
7 10
4 7
4 10
2 5
3 6
8 5
9 3
*/
