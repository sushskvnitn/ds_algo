//q2 day 1 

#include <bits/stdc++.h>
#include<climits>
using namespace std ;

int main(){ 
int n;
cout << "enter the no of elements in array"<<endl;
cin>>n ;
int arr[n];
int maxno,minno;
maxno=INT_MIN;
minno=INT_MAX;
for(int i=0;i<n;i++ ){
    cout<<" enter the element "<<endl;
    cin>>arr[i];
    maxno = max(arr[i],maxno);
    minno = min(arr[i],minno);
}
cout <<"maximum and minimum no in array are " << maxno <<" and " << minno <<endl;
 return 0;
}