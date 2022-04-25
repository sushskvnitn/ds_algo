//day 7
#include <bits/stdc++.h>
using namespace std ;

int main(){ 
 
 int n;
 cin>>n;
 int arr[n];
 bool present[n+1]={false};
int  repeating ;

 for(int i=0;i<n;i++){
     cin>>arr[i];
       if(present[arr[i]]==true){
         repeating = arr[i];
         cout<< repeating<<" ";
       }
     present[arr[i]] = true;
 }

 for(int i=1;i<n;i++){
     if(present[i]==false){
         cout<<i;
         break;
     }
 }
 return 0;
}