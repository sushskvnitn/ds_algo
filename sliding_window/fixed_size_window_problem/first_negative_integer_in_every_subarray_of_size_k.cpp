// Given an array A[] of size N and a positive integer K, find the first negative integer
// for each and every window(contiguous subarray) of size K.
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k);


int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
            for (i = 0; i < ans.size(); i++) {
                  cout << ans[i] << " ";
            }
    }
    return 0;
}

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K) {
    queue<long long> q;
    vector<long long> ans;
    long long i = 0,j = 0;
    // while  we reach to end of array do this 
    while(j<N){
        //agar array element negative hoga then push it to queue 
        if(A[j]<0)
            q.push(A[j]);
        //jab tak pura sliding window nhi mil jyata do j++
        if(j-i+1 < K){
            j++;
        }
        else{
            // maintain window and get -tive  int 
            if(q.empty()) ans.push_back(0);
            else{
                ans.push_back(q.front());
                //pop if contion satisfy
                if(q.front() == A[i])
                    q.pop();
            }
            i++;j++;
        }
    }
    return ans;
 }