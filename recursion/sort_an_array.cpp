#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v,int temp){
      //base case 
      if(v.size()==0|| v[v.size()-1]<=temp){
            v.push_back(temp);
            return;
      }
      int val =  v[v.size()-1];
      v.pop_back();
      insert(v,temp);
      v.push_back(val);

}

void sort(vector<int> &v){
      
      if( v.size()==1){
            return;
      }
      int temp = v[v.size()-1];
      v.pop_back();
      sort(v);
      insert(v,temp);

}

int main()
{
      int n;
      cin>>n;
      vector<int> v(n);
      for(int i=0; i<n; i++){
            cin>>v[i];
      }
      sort(v);
      for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
      }
      return 0;
}