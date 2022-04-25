// day 7
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countSquares(int N) {
        // code here
        int count =0;
        for(int i=1;i<sqrt(N);i++){
            int sqr=i*i;
            if(sqr<N){
                count++;
            }
        }
        return count;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
} 