#include <bits/stdc++.h>
using namespace std;

//iscyclic function which return true if cycle detected takes 4 arguments 
//and returns false if cycle detected
bool iscyclic(int src,vector<vector<int> > &adj,vector<bool> &visited,int parent){
      visited[src]=true;
      vector<int> ::iterator it;
      for(it=adj[src].begin();it!=adj[src].end();it++){
            if(*it!=parent){
                  if (visited[*it]){
                        return true;
                  } 
                  if(!visited[*it] &&iscyclic(*it,adj,visited,src)){ 
                        return true;
                  } 
            }
      }
      return false;
}


int main()
{
      int n, m;
      cout << "enter the number of nodes  and edges " << endl;
      cin >> n >> m;
      vector<vector<int> > adj(n);
      for (int i = 0; i < m; i++)
      {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
      }
      bool cycle = false;
      vector<bool> visited(n,false);
      for (int i = 0; i < n; i++){
            if(!visited[i] && iscyclic(i,adj,visited,-1)){
                  cycle = true;
            }
      }
      if(cycle){
            cout << "cycle detected" << endl;

      }else{
            cout << "cycle not detected "<< endl;
      }
      return 0;
}
