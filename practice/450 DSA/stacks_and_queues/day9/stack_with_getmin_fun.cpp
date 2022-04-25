//day 9
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
void push(stack<int>& s, int a){
	
	int data=-999;
	s.push(a);
	data = min(a,data);
}

bool isFull(stack<int>& s,int n){
	
	if(s.size()==n){
	    return true;
	}else{
	    return false;
	}
}

bool isEmpty(stack<int>& s){
	
	return s.empty();
}

int pop(stack<int>& s){
	int top = s.top();
	s.pop();
	return  top;
}

int getMin(stack<int>& s){
int a = s.top();
s.pop();
while(!s.empty())
{
    if(a>s.top())
    {
        a= s.top();
    }
    s.pop();
}
return  a;
}