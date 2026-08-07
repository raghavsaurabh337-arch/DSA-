// 123
// 456
// 789



#include<iostream>
using namespace std;
int main(){
     int n,m;
     cout<<"Enter the values N:";
     cin>>n;
     // cout<<"Enter the values m:";
     // cin>>m;
    int num=1;
     for (int i=1;i<=n;i++)
     {
               for(int j=1;j<=n;j++)
          {

               cout<<num<<" ";  
               num++;   
          }
          cout<<endl;
     }
     return 0;
}