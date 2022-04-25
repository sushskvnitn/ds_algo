//this search is like level order traversal
#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
bool visited[N];
vector<vector<int> > adj(N);
int main()
{
      int n,m;
      cout<<"enter the number of nodes  and edges "<<endl;
      cin >> n >> m;
      for (int i=0;i<m;i++){
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }
      //! using queue implementing bfs
      int l;
      cout<<"enter the root node value "<<endl;
      cin >> l ;
      queue<int> q;
      q.push(l);
      visited[l] = true;//marked visited 
      while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";
            //printing nodes 
            vector<int>::iterator it;//creating the iterator 
            for(it = adj[node].begin();it!=adj[node].end();it++){
                  if(!visited[*it]){
                        visited[*it] = true;
                        q.push(*it);
                  }
            }
      }

      return 0;
}

// output:
/*enter the number of nodes  and edges 
7 7
1 2
1 3
2 4
2 5
2 6
2 7
3 7
enter the root node value 
1
1 2 3 4 5 6 7 */