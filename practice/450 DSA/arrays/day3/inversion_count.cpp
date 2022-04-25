//day 3 
// Count Inversions :inversion count indicates how far (or close) the array is from being sorted.

// Input: N = 5, arr[] = {2, 4, 1, 3, 5}
// Output: 3
// Explanation: The sequence 2, 4, 1, 3, 5 
// has three inversions (2, 1), (4, 1), (4, 3).


#include <bits/stdc++.h>
using namespace std ;

int main(){ 
 int n;
 cin >> n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin >> arr[i];
 }
int count =0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            count ++;
        }
    }
}
cout <<count;
 return 0;
}

