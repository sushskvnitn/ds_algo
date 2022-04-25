#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s,k;
      cin >> s;
      reverse(s.begin(),s.end());
      for(int i=0;i<s.size();i++)
      {
            if(s[i]=!k[i]){
                  cout << "ERROR : not a palindrome";
                  return 0;
            }
      }
      cout << s<<" is palindrome"<<endl;
      return 0;
}