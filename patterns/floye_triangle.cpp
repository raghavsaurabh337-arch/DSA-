#include<iostream>
using namespace std;
int main()
{
     // int n;
     // int sum=1;
     // cout<<"Enter the number of rows: ";
     // cin>>n;
     // for(int i=0;i<=n;i++)
     // {
     //      for(int j=0;j<=i;j++)
     //      {
     //           cout<<sum<<" ";
     //           sum++;
     //      }
     //      cout<<endl;
     // }
     int n;
      char ch='A';
     int sum=1;
     cout<<"Enter the number of rows: ";
     cin>>n;
     for(int i=0;i<=n;i++)
     {
         
          for(int j=0;j<=i;j++)
          {
               cout<<ch<<" ";
               ch++;
          }
          cout<<endl;
     }
     return 0;
}