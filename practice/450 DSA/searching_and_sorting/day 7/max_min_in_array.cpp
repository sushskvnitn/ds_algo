//day 7 
#include <bits/stdc++.h>
using namespace std ;

int main(){ 
int n;
cin >> n;
int arr[n];
int maxno =INT_MIN;
int minno =INT_MAX;
for(int i=0;i<n;i++){
    cin>>arr[i];
    maxno = max(maxno,arr[i]);
    minno = min(minno,arr[i]);
}
cout<< minno <<"  "<<maxno;
 return 0;
}