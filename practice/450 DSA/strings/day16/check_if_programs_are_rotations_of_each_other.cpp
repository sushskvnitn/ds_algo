#include <bits/stdc++.h>
using namespace std;
bool check(string s1,string s2){
      if(s1==s2) {
          return true;  
      }
      if(s1.length()!=s2.length()){
          return false;  
      } 
      int t=s1.length();
          for(int i=1;i<s2.length(); i++){
                reverse(s2.begin(), s2.begin()+1);
                reverse(s2.begin()+1, s2.end());
                reverse(s2.begin(), s2.end());
            if(s1==s2){
                  return true;
            }    
      }    
      return false;

}

int main()
{
      string s1,s2;
      cin>>s1>>s2;
    cout<< check(s1,s2);
      return 0;
}