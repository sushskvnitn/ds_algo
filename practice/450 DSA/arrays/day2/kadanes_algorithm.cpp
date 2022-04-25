//day2 
// Initialize:
//     max sum = INT_MIN
//     curr sum = 0

// Loop for each element of the array
//   (a) curr sum = curr sum + a[i]
//   (b) if(max sum < curr sum)
//             max sum = curr sum
//   (c) if(curr sum < 0)
//             curr sum = 0
// return max sum


#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int maxsum = INT_MIN;
	int currsum =0;
	for(int i=0 ; i<size ;i++){
		currsum = currsum + a[i];
		maxsum = max (currsum,maxsum);
		if(currsum<0){
			currsum = 0;
		}
	}
 return maxsum;
	
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}

