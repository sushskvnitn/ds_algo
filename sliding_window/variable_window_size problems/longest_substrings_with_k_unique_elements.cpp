// # condtion will be : mp.size()==K
//output : length of that longest substring with k unique characters in it .
#include <bits/stdc++.h>
using namespace std;


int longest_substring_withkunique(string s, int k)
{
    int n = s.length();
    int i = 0, j = 0;
    int res = -1;
    map<char, int> mp;
      while (j < n)
      {
           mp[s[j]]++;
           if(mp.size()<k){
            j++;
           }else if(mp.size()==k) {
            res =max(res,j-i+1);
            j++;
           }else if(mp.size()>k){
            while(mp.size()>k){
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
      int k;
      cin>>s>>k;
      cout<<longest_substring_withkunique(s,k);

      return 0;
}
