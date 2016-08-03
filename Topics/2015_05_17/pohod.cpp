#include <iostream>
using namespace std;

long long A[101][101];

long long Q[101], begin, end;
bool visited[101];

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

int main () {
  long long x, /// крайният връх
            y, /// бр. ребра
            max_nom=0; /// най-голям номер на връх
  /// Неориентиран граф
  long long i, vruh1, vruh2;
  cin >> x >> y;
  for (i=0;i<y;i++){
    cin >> vruh1 >> vruh2;
    A[vruh1][vruh2]=A[vruh2][vruh1]=1;
    if (vruh1>max_nom) {max_nom=vruh1;}
    if (vruh2>max_nom) {max_nom=vruh2;}
  }

  i=BFS(0,x,max_nom+1);
  if (i>0) cout << "Shte stignat za "<<i<<" dni\n";
  else cout << "Nyama put ot Sofia do n. Emine\n";

  return 0;
}

/*
6 11
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
