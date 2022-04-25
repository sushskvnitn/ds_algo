#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s;
      cin >> s;
      reverse(s.begin(),s.end());
      cout <<s<<endl;
      
      char buf;
      int n= s.size();
      for(int i=0;i<(n/2);i++){
            buf = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = buf;
      }
      cout <<s;

      
      return 0;
}