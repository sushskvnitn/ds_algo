//day 8
#include <bits/stdc++.h>
using namespace std ;

int main(){ 
 stack <int >st ;
 st.push(1);
 st.push(2);
 st.push(9);
 st.push(4);
 st.push(5);

 int mid = st.size();
 mid =(mid/2);
 while(mid){
    st.pop();
    mid--;
 }
 cout<<st.top();
 return 0;
}