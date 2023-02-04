// undirected graph..

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int E;
// int N;
// cin >> E >> N;
//  vector<vector<int>> G(N, vector<int>(N,0));
//  for(int i = 0; i < E; i++){ int src, dest;
//   cin >> src >> dest;
//  G[src][dest] = 1;
//  G[dest][src] = 1;
//  }
//  for(int i = 0; i < N; i++){
//  cout << i << " -> ";
//  for(int j = 0; j < N; j++){
//  if(G[i][j] == 1){
//  cout << j << " ";
//  }
//  }
//  cout << "\n";
//  }
// }

// diected graph..

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int E;
// int N;
// cin >> E >> N;
//  vector<vector<int>> G(N, vector<int>(N,0));
//  for(int i = 0; i < E; i++){
// int src, dest;
//   cin >> src >> dest;
//  G[src][dest] = 1;
//  G[dest][src] = 0;
//  }
//  for(int i = 0; i < N; i++){
//  cout << i << " -> ";
//  for(int j = 0; j < N; j++){
//  if(G[i][j] == 1){
//  cout << j << " ";
//  }
//  }
//  cout << "\n";
//  }
// }


// adjecency list..

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
// int E;
// int N;
// cin >> E >> N;
// vector<int> G[N];
// for(int i = 0; i < E; i++){
//  int src, dest;
//  cin >> src >> dest;
//  G[src].push_back(dest);
//  G[dest].push_back(src);
//  }
//  for(int i = 0; i < N; i++){
//  cout << i << " -> ";
//  for(int j = 0; j < G[i].size(); j++){
//  cout << G[i][j] << " ";
//  }
//  cout << "\n";
//  }
// }


// BFS with graph..

#include <bits/stdc++.h>
using namespace std;
int main() {
int E;
int N;
cin >> E >> N;
vector<int> G[N];
for(int i = 0; i < E; i++){
 int src, dest;
 cin >> src >> dest;
 G[src].push_back(dest);
 G[dest].push_back(src);
 }
 for(int i = 0; i < N; i++){
 cout << i << " -> ";
 for(int j = 0; j < G[i].size(); j++){
 cout << G[i][j] << " ";
 }
 cout << "\n";
 }
 queue<int> q;
 q.push(0);
 vector<bool> visited(N,0);
 visited[0] = 1;
 while(!q.empty()){
 int n = q.size();
 for(int i = 0; i < n; i++){
 int node = q.front();
 q.pop();
 cout << node << " ";
 for(int neigh : G[node]){
 if(!visited[neigh]){
 visited[neigh] = 1;
 q.push(neigh);
 }
 }
 }
 cout <<"\n";
 }
}