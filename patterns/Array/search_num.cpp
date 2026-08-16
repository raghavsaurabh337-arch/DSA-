#include<iostream>
using namespace std;
int search(){
     int num[]={23,4,76,-98,34,65,32,6};
     int size=8;
     int targate=605;
     for(int i=0;i<size;i++){
          if(num[i]==targate){
                cout<<"value"<<num[i]<<endl;
               return i; 
          }
     }
     return -1;
}
int main(){
     int i =search();  
     int num[]={23,4,76,-98,34,65,32,6};     
    cout<<i;
     return 0;
}