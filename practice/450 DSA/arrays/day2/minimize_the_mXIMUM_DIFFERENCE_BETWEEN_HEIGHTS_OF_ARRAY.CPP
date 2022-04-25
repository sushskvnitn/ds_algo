//day 2 

// Given an array arr[] denoting heights of N towers and a positive integer K, you have to
//  modify the height of each tower either by increasing or decreasing them by K only once. 
// After modifying, height should be a non-negative integer. Find out the minimum possible 
// difference of the height of shortest and longest towers after you have modified each tower.

#include <bits/stdc++.h>
using namespace std ;
int main(){ 
 int n,k;
 cin >> n>>k;
 int arr[n];
 for(int i=0;i<n ;i++){
     cin>>arr[i];
 }
sort(arr,arr+n);
int minno =arr[0]+k;
int maxno = arr[n-1]-k;
cout<< maxno - minno <<endl;
 return 0;
}


// Input:
// K = 2, N = 4
// Arr[] = {1, 5, 8, 10}
// Output:
// 5
// Explanation:
// The array can be modified as 
// {3, 3, 6, 8}. The difference between 
// the largest and the smallest is 8-3 = 5.