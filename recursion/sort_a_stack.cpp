#include <bits/stdc++.h>
using namespace std;

void sort(stack<int> &st){
      if(st.size()==1){
            return ;
      }
      int lastnm = st.top();
      st.pop();
      sort(st);
      if(lastnm>st.top()){
            int temp = st.top();
            st.pop();
            st.push(lastnm);
            st.push(temp);
            sort(st);
      }else{
            st.push(lastnm);
      }
}


int main()
{
      int n;
      cin>>n;
      stack<int> st;
      for(int i=0;i<n;i++)
      {
            int x;
            cin>>x;
            st.push(x);
      }
      sort(st);
      for(int i=0;i<n;i++){
            cout<<st.top()<<"  ";
            st.pop();
      }
      return 0;
}