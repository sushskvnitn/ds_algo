#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n, m;
      cout << "enter the number of nodes  and edges " << endl;
      cin >> n >> m;
      int count = 0;int flag[n];
      vector<vector<int> > adj(n);
      vector<int> indeg(n, 0);
      for (int i = 0; i < m; i++)
      {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            indeg[y]++;
            // adj[y].push_back(x); graph will be directed
      }
      // using queue
      queue<int> q;
      for (int i = 0; i < n; i++)
      {
            if (indeg[i] == 0)
                  q.push(i);
      }
      while (!q.empty())
      {
            int u = q.front();
            q.pop();
            cout << u << " ";
            count++;
            for (int i = 0; i < adj[u].size(); i++)
            {
                  int v = adj[u][i];
                  indeg[v]--;
                  if (indeg[v] == 0)
                        q.push(v);
            }
      }
}