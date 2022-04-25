
#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		vector<string>find_permutation(string s)
		{       vector<string>v;

		int t = s.length();
		int fact=1;
		for(int i=t;t>0;i--){
		     fact =fact * t;
		     t--;
		}
		
		    for(int i=0;i<fact;i++){
		        next_permutation(s.begin(),s.end());
		        v.push_back(s);
		    }
		       return v;
		}
};


int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
