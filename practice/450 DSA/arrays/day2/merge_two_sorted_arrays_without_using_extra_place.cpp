// day2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n+m], arr2[m];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int j = 0; j <m; j++)
        cin >> arr2[j];

    for (int i = 0; i < m; i++)
    {
        arr[n+i]=arr2[i];
    }
    sort(arr,arr+n+m);
    for(int i =0;i<(n+m);i++){
        cout <<arr[i]<<"  ";
    }
    return 0;
}