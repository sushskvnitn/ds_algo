//day 9 
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
   vector <long long> res;
        stack<long long> st;
        st.push(-1);
        
        for (int i=n-1; i>=0; i--){
            while(st.top() < arr[i] && st.top() != -1)
                    st.pop();
                    
            res.push_back(st.top());
            st.push(arr[i]);

        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i=0;i<res.size();i++){
           cout <<res[ i ]<< " "; 
        } 
        cout<<endl;
    }
	return 0;
 } 
// 1
// 4
// 1 3 2 4