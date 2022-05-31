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
      vector<int>:: iterator it;
      for(int i=1;i<n+1;i++){
          cout<<i<<" ->";
          for(it=adj[i].begin();it!=adj[i].end();it++){
              cout<<*it <<"  ";
          }cout<<endl;
      }
      return 0;
}
