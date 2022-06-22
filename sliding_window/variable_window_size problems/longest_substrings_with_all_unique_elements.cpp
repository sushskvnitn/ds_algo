#include <bits/stdc++.h>
using namespace std;

int longest_substring_withkunique(string s)
{
    int n = s.length();
    int i = 0, j = 0;
    int res = -1;
    map<char, int> mp;
      while (j < n)
      {
           mp[s[j]]++;
           if(mp.size()<j-i+1){
            j++;
           }else if(mp.size()==j-i+1) {
            res =max(res,j-i+1);
            j++;
           }else if(mp.size()<j-i+1){
            while(mp.size()<j-i+1){
                  mp[s[i]]--;
                  if(mp[s[i]]==0){
                        mp.erase(s[i]);
                  }
                  i++;
            }
            j++;
           }
      }
      return res;
}
int main()
{
      string s;
      cin>>s;
      cout<<longest_substring_withkunique(s);
      return 0;
}