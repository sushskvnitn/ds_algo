//q6 day1
#include <bits/stdc++.h>

using namespace std ;

int main(){ 
  set<int> s;
  int n,m;
  cin>> n >>m;
  int arr[n],arr2[m]; 

  for(int i=0;i<n;i++){
    cin>>arr[i];  
    s.insert(arr[i]);
  }
  
  for(int j=0;j<m;j++){
     cin>>arr[j];
     s.insert(arr[j]);
  }
  cout <<s.size();
 return 0;
}