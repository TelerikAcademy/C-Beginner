#include <iostream>
using namespace std;

long long A[10][10];

long long Q[10], begin, end;
bool visited[10];
/**
void BFS(long long start, long long n){
  Q[end]=start;
  visited[start]=true;
  end++;
  while (begin<end){
    long long vruh=Q[begin], i;
    begin++;
    for (i=0;i<n;i++){
      if (A[vruh][i]==1 and !visited[i]) {
        Q[end]=i;
        end++;
        visited[i]=true;
      }
    }
  }
}
*/
long long BFS(long long start, long long last, long long n){
  long long endzone, step;
  Q[end]=start;
  visited[start]=true;
  end++;
  step=0;
  endzone=end;
  while (begin<end){
    for ( ;begin<endzone;begin++){
      long long vruh=Q[begin],i;
      for (i=0;i<n;i++){
        if (A[vruh][i]==1 and !visited[i]) {
          Q[end]=i;
          end++;
          visited[i]=true;
          if (i==last) {return step+1;}
        }
      }
    }
    step++;
    endzone=end;
  }
  return -1;
}

void print_matrix(long long n){
  long long i,j;
  for (i=0;i<n;i++){
    for(j=0;j<n; j++) {
      cout << A[i][j] << ' ';
    }
    cout << endl;
  }
}


int main () {
  long long n, /// бр. върхове
            m; /// бр. ребра
  /// Неориентиран граф
  long long i, vruh1, vruh2;
  cin >> n >> m;
  for (i=0;i<m;i++){
    cin >> vruh1 >> vruh2;
    A[vruh1][vruh2]=A[vruh2][vruh1]=1;

  }
  /**
  /// Oриентиран граф
  long long i, vruh1, vruh2;
  cin >> n >> m;
  for (i=0;i<m;i++){
    cin >> vruh1 >> vruh2;
    A[vruh1][vruh2]=1;

  }
  */
  print_matrix(n);

  long long start_vruh, end_vruh;
  cout << "Startov vruh:";cin>>start_vruh;
  cout << "Kraen vruh:";cin>>end_vruh;

  i=BFS(start_vruh,end_vruh,n);
  if (i>0) cout << "Mejdu dvata vurha ima "<<i<<" rebra\n";
  else if (i==0) cout << "Tova e edin i susht vruh\n";
  else cout << "Nyama put mejdu vurhovete\n";

//  if (visited[end_vruh]) {cout<<"Yes\n";}
//  else  {cout<<"No\n";}

  return 0;
}

/*
10 11
0 1
0 5
0 3
1 3
1 2
1 5
1 7
2 5
4 5
4 6
8 9

*/
