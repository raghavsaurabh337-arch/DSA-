#include<iostream>
using namespace std;
int main(){
     int n;
     cout <<"Enter the value :";
     cin>>n;
     //top
     for(int i=1;i<=n;i++){
          //space
          for (int j=1;j<=n-i;j++){
               cout<<" ";
     }
          cout<<"*";
          if(i!=0){
               for(int k=1;k<=2*i-1;k++){
                    cout<<" ";
               }
               cout<<"*";
          }
          cout<<endl;
          
     }
     //bottom 
     for(int i=1;i<=n-1;i++){
          //spcae
          for(int j=1;j<=i+1;j++)
          {

               cout<<" ";
          }
          cout<<"*";
          //space
          if(1 !=n-1){
               for(int j=1;j<=2*(n-i)-1;j++){
                    cout<<" ";
          }
          cout<<"*";
     }
     
     
     cout<<endl;
}

}