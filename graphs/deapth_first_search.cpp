#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
bool visited[N];
vector<vector<int> > adj(N);


void dfs(int node){
      //preorder 
      visited[node] = true;
      cout<<node<<" ";//inorder printing 
      vector<int>::iterator it;
      for(it = adj[node].begin();it!=adj[node].end();it++){
            if(!visited[*it]){
                  dfs(*it);
            }
      }
      //  cout<<node<<" ";//post order printing
}
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
      //! using queue implementing dfs
      /* 3 behavioural methods : 1} preorder for node 2} inorder for node childs 3} post order  all these emthods will be appiled to the each node  */
      int l;
      cout<<"enter the root node value "<<endl;
      cin >> l ;
      dfs(l);
      return 0;
}
