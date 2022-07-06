#include <bits/stdc++.h>
using namespace std;

void print1ton(int n){
      if(n==1){
            cout <<n<<" ";
            return;
      }
      print1ton(n-1);
      cout<<n<<"  ";
}

int main()
{
      int n;
      cin>>n;
      print1ton(n);
 
      return 0;
}