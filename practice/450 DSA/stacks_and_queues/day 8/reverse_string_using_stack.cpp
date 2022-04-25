///day 8
#include <bits/stdc++.h>
using namespace std ;

int main(){ 
string s = "sushant ";
stack <char > st;
for(int i=0;i<s.length();i++){
    st.push(s[i]);
}
for(int i=0;i<s.length();i++){
    cout<< st.top();
    st.pop();
}
 return 0;
}

