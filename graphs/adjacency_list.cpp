#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n,m;//n-> no of nodes   ,m -> no of edges
      cout<<"Enter the number of nodes and edges: ";
      cin >>n>>m;
      vector<vector<int> > adj(n+1);
      //for undirected graph
      for (int i=0;i<m;i++){
            int x,y;
            cin >>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);//comment this for directed graph
      }
      cout<<"----------------adjacency list----------------"<<endl;
      for (int i=0;i<n;i++){
            cout<<i<<"->";
            for (int j=0;j<adj[i].size();j++){
                  cout<<adj[i][j]<<" ";
            }
            cout<<endl;
      }
      return 0;
}