/*
catlan no/seq :
 catlan numbers are a sequence of natural numbers that occur in
 various counting problems often involving recursively defined objects 
    closed form in terms og binomial coeficients :-
     Cn = 1/(n+1)* 2nCn = summation Ci Cn-1 , i=0 to n-1
  
   C0 =1;
   C2 = C0C1 + C1C0 =3;
   C3 = C0C2 + C1C1 + C2C0 =5;
       here you can see difference of one in terms increasing and decreasing 
       applications: possible bsts , paranthesis / bracets combination , possible forests ....
 */


#include <bits/stdc++.h>
using namespace std;
int catlan(int n){
    if(n<=1){
        return 1;
    }
    int res =0;
    for(int i=0;i<=n-1;i++){
        res+=catlan(i)*catlan(n-i-1);
    }
    return res;
}
int main()
{
    for(int i=0;i<10;i++){
        cout<<catlan(i)<<" ";
    }
    return 0; //this have optimal tc sol in dp 
}