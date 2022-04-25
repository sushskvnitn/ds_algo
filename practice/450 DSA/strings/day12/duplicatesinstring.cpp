#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s;
      cin >> s;

      vector<char> v;
      bool arr[400];
      for (int i = 0; i <400 ; i++){
            arr[i] = false;
      }
      for (int i =0;i<s.length();i++){
            if(arr[s[i]]==true){
                  v.push_back(s[i]);
            }
            arr[s[i]] = true;
      }

      for (int i = 0; i <v.size(); i++){
            cout << v[i] << " ";
      }

      return 0;
}
