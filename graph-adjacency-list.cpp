#include <iostream>
#include <vector>
using namespace std;
class Graph{vector<vector<int>> adj;public:Graph(int vertices):adj(vertices){}void addEdge(int u,int v){adj[u].push_back(v);adj[v].push_back(u);}void display()const{for(int i=0;i<(int)adj.size();++i){cout<<i<<": ";for(int v:adj[i])cout<<v<<' ';cout<<'\n';}}};
int main(){Graph g(5);g.addEdge(0,1);g.addEdge(0,2);g.addEdge(1,3);g.addEdge(2,4);g.display();}