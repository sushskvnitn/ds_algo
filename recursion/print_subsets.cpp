#include <bits/stdc++.h>
using namespace std;
//for unique take set 
void solve(string in ,string op ){
      if(in.length()==0) {
            cout<< op << " ";
            return;
      }
      string op1= op;
      string op2= op;
      op1+= in[0];
      //now remove the leading character from in
      in.erase(0,1);
      solve(in,op1);
      solve(in,op2);
}

int main()
{
      string s,op;
      cin>>s;
      solve(s,op);
      return 0;
}