//day 9
#include <bits/stdc++.h>
using namespace std ;
  
void insertatbottom (stack <int> &st,int ele){
      if(st.empty()){
          st.push(ele);
          return;
      }
      int topelement = st.top();
      st.pop();
      insertatbottom(st,ele);
      st.push(topelement);
      
  }

  void reverse(stack<int > &st){
      if(st.empty()){
          return;
      }
      int ele = st.top();
      st.pop();
      reverse(st);
      insertatbottom(st,ele);
  }
int main(){ 
   stack <int> st;
   st.push(2);
   st.push(4);
   st.push(6);
   st.push(8);
   st.push(9);
   st.push(0);
   reverse(st);
   while(!st.empty()){
       cout << st.top()<<" ";
       st.pop();

   }cout << endl;
 return 0;
}