#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s ,k;
      cout<< "'enter the 2 strings '"<<endl;
    cin >>s;
    cin >>k;
    for(int i=0;i<s.length();i++){
          if(s==k){
            printf("same");
            return 0;
         } else{
               //how to rotate the string
               char temp = k[0] ;
               for(int i=0;i<k.length()-1;i++){
                   k[i] =k[i+1]; 
               }
               k[k.length()-1] = temp;
         }
     }
      printf("Not same");
      return 0;
}
