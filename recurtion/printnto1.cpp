#include <bits/stdc++.h>
using namespace std;
void printnto1(int n){
      if(n==1){
            //base case
            cout<<n<<" ";
            return;
      }
      cout<<n<<" ";//induction 
      printnto1(n-1);//hypothesis 
}
int main()
{     int n;cin>>n;
      printnto1(n);
      return 0;
}