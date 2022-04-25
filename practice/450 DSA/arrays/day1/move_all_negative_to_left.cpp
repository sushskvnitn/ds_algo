//q5 day2 

#include <bits/stdc++.h>
using namespace std ;

int main(){ 
int n;
cin >> n;
int arr[n],newarr[n];
int j=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<0){
        newarr[j]=arr[i];
        j++;
    }
}
for(int i=0;i<n;i++){
   if(arr[i]>0){
        newarr[j]=arr[i];
        j++;
    }  

}
for(int j=0;j<n;j++){
    cout<<newarr[j]<<" ";
}
 return 0;
}