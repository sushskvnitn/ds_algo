#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &A, const int &k) {
	int n = A.size();
	int i = 0, j = 0, sum = 0;
	int mx = INT_MIN;
	while (j < n) {
		sum += A[j];
		if (sum < k) {
			j++;
		} else if (sum == k) {
			mx = max(mx, j - i + 1);
			j++;
		} else if (sum > k) {
			while (sum > k) {
				sum = sum - A[i];
				i++;
			}
			j++;
		}
	}
	return mx;
}
int main()
{     int i1;
      cin >> i1;
	vector<int> A(i1) ;
      for(int i = 0; i < i1; i++) {
          cin >> A[i];
      }
	int k = 5;
	cout << solve(A, k);
	return 0;
}