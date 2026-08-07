#include <iostream>
using namespace std;
int main()
{
     int n;
     int i,re;
     cout<<"Enter the number : ";
     cin>>n;
     for(i=1;i<=10;i++)
     {
         re =n*i;     

         cout<<n<<"*"<<i<<"="<<re<<endl;
     }
     return 0;
}