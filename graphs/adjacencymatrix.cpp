#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n,m;//n-> no of nodes   ,m -> no of edges
      cout<<"Enter the number of nodes and edges: ";
      cin >>n>>m;
      vector<vector<int> > adj(n+1,vector<int>(n+1,0));
      //for undirected graph
      for (int i=0;i<m;i++){
            int x,y;
            cin >>x>>y;
            adj[x][y]=1;
            adj[y][x]=1;
      }
      cout<<"----------------adjacency matrix----------------"<<endl;
      for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                  cout<<adj[i][j]<<" ";
            }
            cout<<endl;
      }

      return 0;
}