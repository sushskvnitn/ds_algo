//day 7
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector <int> v;
    v.push_back(-1);    v.push_back(-1);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            v[0]=i;
            break;
        }
    }
    for(int i =0;i<n;i++){
     
        if(arr[i]==x && arr[i]!= arr[i+1] ){
            v[1]=i;
        }
        
    }
    return v;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}

// For Input: 
// 1
// 9 5
// 1 3 5 5 5 5 67 123 125

// Your Output: 
// 2 5