/* connected components :
     subgraph in whitch any two vertices are connected to each other by paths and
which is not connected to any other subgraph.

 *idea :
 1. visit node in depth-first order
 2. if node is not visited, visit that node and its neighbours recursively

 EACH TIME WE VISIT A UN VISITED  NODE, NEW CONNECTED COMPONENT IS CREATED

*/

#include <bits/stdc++.h>
using namespace std;
vector<int> components;
vector<bool> visited;
vector<vector<int> > adj;
int n, m;
int get_components(int idx)
{
      if (visited[idx]){
            return 0;
      }
      visited[idx] = true;
      int count = 1;
      for (int i = 0; i < adj[idx].size(); i++)
      {
            count += get_components(adj[idx][i]);
            
      }
      return count;
}
int main()
{

      cin >> n >> m;
      // vector initialization
      adj = vector<vector<int> >(n);
      visited = vector<bool>(n, false);
      for (int i = 0; i < m; i++)
      {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
      } // got adjacency list
      for (int i = 0; i < n; i++)
      {
            if (!visited[i])
            {
                  components.push_back(get_components(i));
                  
            }
      }
      cout <<"size:" << endl;
      for (int i = 0; i < components.size(); i++)
      {
            cout << components[i] << " ";
      }

      return 0;
}