//********rectangle pattern ******

// #include <iostream>
// using namespace std ;

// int main(){
//   int i  ,row,coln;
//   cin>>row>>coln;

// for(int i=0;i<row;++i){
//     for (int j = 1; j <= coln; j++)

//     {
//         /* code */
//        cout<<"*";
//     }
//      cout<<endl;
// }
//  return 0;
// }

//********hollow rectangle pattern ******
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, row, coln;
//     cin >> row >> coln;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= coln; j++)

//
//         {
//             if (i == 1 || i == row || j == 1 || j == coln)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

//   *****inverted half pyramid ****

//  #include <iostream>
//  using namespace std ;

//  int main(){
//  int  n;
//     cin >>n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//          cout<<"* ";
//         }
//         cout<<endl;
//     }
//   return 0;
//  }

//   *****half inverted pyramid ****
/*  
        *
       **
      ***
     ****
 */
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j <= n - i)
//             {
//                 cout <<"  ";
//             }
//             else
//             {
//                 cout <<"* ";
//             }
//         }
//         cout <<endl;
//     }
//     return 0;
// }



// floyd's triangle 
/* 
1
2 3
4 5 6
7 8 9 10
*/
// #include <iostream>
// using namespace std ;

// int main(){ 
//     int n,count;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++){
//             cout<<count<<" ";
//             count++;
//         }
//     cout<<endl;
//     }
//  return 0;
// }


/*butterfly pattern */
#include <iostream>
using namespace std ;

int main(){ 
int n,count;
    cin >> n;
    for (int i = 1; i <= n;i ++)
    {
        for (int j = 1; j <= i; j++){
            cout<<"*";  
        }
        int space=2*n- 2*i;
        for (int j =1;j<=space;j++){
            cout<<" ";
        }
         for (int j = 1; j <= i; j++){
            cout<<"*";  
        }
        cout<<endl;
    }
        for (int i = n; i >= 1;i --)
    {
        for (int j = 1; j <= i; j++){
            cout<<"*";  
        }
        int space=2*n- 2*i;
        for (int j =1;j<=space;j++){
            cout<<" ";
        }
         for (int j = 1; j <= i; j++){
            cout<<"*";  
        }
        cout<<endl;
    }
 return 0;
}
