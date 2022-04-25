#include <iostream>
#define n 100 
using namespace std ;
class stacks {
    int * arr;
    int top;
    public:
    stacks(){
        arr =new int[n];
        top =-1;
    }
    void push(int val){
        if(top == n-1){
            cout<<" stacks overflow"<<endl;
                return;
        }
        top ++;
        arr[top] = val;
    }

    void pop(){
        if(top ==-1){
            cout<<"stacks is empty "<<endl;
            return;
        }
        top --;

    }
    int topele(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        if(top ==-1){
            return true;
        }
        return false;
    }
};

int main(){ 
    stacks st;
    st.push(1);  cout << st.topele()<<" ";
    st.push(2);  cout << st.topele() <<" ";
    st.push(3);  cout << st.topele() <<" ";
    st.push(4);  cout << st.topele() <<" ";
    st.pop();
    st.pop();
    st.pop();
    cout<<st.isempty();
 return 0;
}