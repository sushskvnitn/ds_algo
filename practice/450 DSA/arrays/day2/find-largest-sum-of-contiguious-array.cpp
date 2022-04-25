//day 2

#include <bits/stdc++.h>
using namespace std ;

int main(){ 
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin >> arr[i];
 }
 int sum,maxsum ;

 for(int i=0 ;i< n ;i++)
 {  sum =arr[i];
     for(int j=i+1;j<n;j++){
         sum =sum + arr[j];
         maxsum = max (sum,maxsum);
         
     }
 }
cout <<maxsum<<" ";


 return 0;
}