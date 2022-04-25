/*algorithm:  
1> mark current node as visited & also mark the index in recursion stack
2> find all the vertices which are not visited and are adjacent to currnt node 
3> if any of the adjacent vertices are visited and not in recursion stack then there is a cycle
*/

#include <bits/stdc++.h>
using namespace std;

bool iscyclic(int src,vector<vector<int> > &adj,vector<bool> &visited,vector<bool> &stack)
{
  
    stack[src]=true;//mark the index in recursion stack
    if(!visited[src])
    {
        visited[src]=1;//mark current node as visited
        for(int i=0;i<adj[src].size();i++)//find all the vertices which are not visited and are adjacent to currnt node 
        {
           if(!visited[i] && iscyclic(i,adj,visited,stack))
                {
                    return true;//cycle found
                }
           if(stack[i])
            {
                return true;//cycle present
            }
        }
    }
      stack[src]=false;
      return false;
}



int main()
{
      int n,m;
      cin>>n>>m;
      vector<vector<int> > adj(n);
      for(int i=0;i<m;i++)
      {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
      }
      vector<bool> stack(n,false);
      vector<bool> visited(n,false);
      bool cycle = false;

      for(int i=0;i<n;i++)
      {
            if(!visited[i]&&iscyclic(i,adj,visited,stack))
            {
                   cycle = true;
            }

     
      }
       if(cycle)
            {
                  cout<<"cycle exists";
            }
            else
            {
                  cout<<"no cycle";
            }
      return 0;
}