#include<iostream>
using namespace std;
int main(){
     int n[2][2],i,j;
     cout<<"enter the elements";
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cin>>n[i][j];
        }
     }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<"\n";
     }
     return 0;
}