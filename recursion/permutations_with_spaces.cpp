#include <bits/stdc++.h>
using namespace std;
void solve(string &ip,  string &op)
{
    if(ip.length()==0){
            cout<<op<<endl;
            return;
    }
      string op1=op;
      string op2=op;
      op1.push_back('_');
      op2.push_back(ip[0]);
      op1.push_back(ip[0]);
      ip.erase(0,1);
      solve(ip,op1);
      solve(ip,op2);
}

int main()
{
      string s,op;
      cin>>s;
      op.push_back(s[0]);
      s.erase(0,1);
      solve(s,op);
      return 0;
}
