#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of patterns:";
    cin>>n; 
     
       for (int i=1;i<=n;i++)
     {

          for(int j=i;j<=n;j++)
          {

               cout<<" ";     
          }
          for(int p=i;p<=n;p++)
          {
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     return 0;
}