//day 1 q4
#include <bits/stdc++.h>
using namespace std ;

int main(){ 

int n;
cin >>n;
int arr[n];int zero,one,two;
zero=one=two =0;
for(int i=0;i<n ;i++){
    cin >> arr[i];
    if(arr[i]==0){
        zero++;
    }
    if(arr[i]==1){
        one++;
    }
    if(arr[i]==2){
        two++;
    }
}
while(zero){
    cout<<"0"<<" ";
    zero--;
}
while(one){
    cout<<"1"<<" ";
    one--;
}
while(two){
    cout<<"2"<<" ";
    two--;
}

 return 0;
}