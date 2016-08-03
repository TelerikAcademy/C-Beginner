#include <iostream>
using namespace std;
#define N 30

bool A[N][N], visited[N];
char C[N];
long long n;

long long get_nom(char ch){
  long long i;
  for (i=0;i<n;i++) if (ch==C[i]) return i;
  C[n]=ch;
  n++;
  return n-1;
}

void read_graph(){
  char a,b;
  while (cin>>a>>b){
    long long na=get_nom(a), nb=get_nom(b);
    A[na][nb]=true;
    A[nb][na]=true;
  }
}
void DFS(long long start){
  visited[start]=true;
  for (long long i=0;i<N;i++) {
    if (A[start][i]==true and visited[i]==false) {
      DFS(i);
    }
  }
}



int main () {
  read_graph();
  long long cs=0, i;
  for (i=0;i<N;i++) {
    if (!visited[i]) {
      DFS(i);
      cs++;
    }
  }
  cout << "V grupata ima predstaviteli na "<<cs<<" roda\n";

  return 0;
}

/**
A B
A c
B d
B e
C D
C E
C F
D G
D H
E I
*/
