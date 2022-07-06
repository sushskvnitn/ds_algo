#include <bits/stdc++.h>
using namespace std;

void solve(stack<int>&s, int k){
      if(k==1){
            cout<<s.top()<<" ";
            s.pop();
            return;
      }
      int temp = s.top();
      s.pop();
      solve(s,k-1);
      s.push(temp);
      return ;
}

int main()
{     
      int n;
      cin>>n;

      stack<int> st;
      for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.push(x);
      }
      int k = n/2+1;
      solve(st,k);

      return 0;
}