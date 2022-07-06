
#include<iostream>
#include<algorithm>
#include<string>


using namespace std;

void solve(string ip,string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }

    string op1 = op;
    string op2 = op;

    op1.push_back(tolower(ip[0]));
    op1.push_back(ip[1]);
    op2.push_back(toupper(ip[0]));
    op2.push_back(ip[1]);
    
    ip.erase(0,2); //deletes 2 character from index 0
    solve(ip,op1);
    solve(ip,op2);
}


int main() {

    string c;
    cout<<"input"<<endl;
    cin>>c;
    string op =" ";

     cout<<"output "<<endl;
    solve(c,op);


return 0;
}

// input
// aEaH
// output 
//  aEaH
//  aEAH
//  AEaH
//  AEAH