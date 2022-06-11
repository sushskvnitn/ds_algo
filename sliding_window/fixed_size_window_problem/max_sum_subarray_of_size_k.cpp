//Input: Given array and size of the array and the size of the sub array to be considered.
//Output: Maximum sum of subarray of size k.
#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t;
      cin >> t;
      while (t--)
      { // max of subarray of size k
            int n, k;
            cin >> n >> k; // size of array and subarray
            int a[n];
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                  cin >> a[i];
            }
            int i = 0, j = 0, sum = 0;
            while (j < n)
            {
                  if (j - i + 1 < k)
                  {
                        sum += a[j];
                        j++;
                  }
                  else if (j - i + 1 == k)
                  {
                        sum += a[j];
                        v.push_back(sum);
                        sum -= a[i];
                        i++;
                        j++;
                  }
            }
            cout << *max_element(v.begin(), v.end()) << endl; // for printing max of all k subarray of size k
      }
      return 0;
}