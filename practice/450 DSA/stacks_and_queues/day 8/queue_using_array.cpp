//day 8 

#include <iostream>
#define n 100
using namespace std ;
 class queue{
     int * arr;
     int front ;
     int back;
     public:
     queue(){
         arr = new int[n];
         front = -1;
         back = -1;

     }
     void push(int x){
         if(back ==n-1){
             cout <<"stack overflow "<< endl;
             return;
         }
         if(front ==-1){
             front++;
         }
         back ++;
         arr[back]=x;
     }
     void pop(){
         if(front==-1 || front >back){
             cout<<"empty queue"<<endl;
            return;
         }
         front ++;
     }
     bool isempty(){
         if(front ==-1 || front > back){
             return true;
         }
         return false;

     }
     int peek(){
           if(front==-1 || front >back){
            cout<<"empty queue"<<endl;
            return -1;
         }
         return arr[front];
     }

 };
int main(){ 
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek()<<" ";    
    q.pop();cout << q.peek()<<" ";
    q.pop();cout << q.peek()<<" ";
    q.pop();cout << q.peek()<<" ";
    q.pop();
    cout<<q.isempty();

 return 0;
}