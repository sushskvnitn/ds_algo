//q3 day1
#include <bits/stdc++.h>
using namespace std ;

int main(){ 
int n,k;
cout<<" enter n and k ";
cin >> n >> k;
int arr[n];

for(int i=0;i<n;i++){
  cin >> arr[i];
}

for(int i=0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if (arr[j]<arr[i]){
            int temp = arr[i];
             arr[i] =arr[j];
            arr[j]=temp;
        }
    }
  
}
cout<<"kth max and min element are" <<arr[n-k]<<"  "<<arr[k-1];

 return 0;
}