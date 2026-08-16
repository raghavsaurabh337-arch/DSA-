#include<iostream>
using namespace std;
int main(){

     
     int num[]={23,45,76,-98,34,65,32,6};
     int size=8;
     int smallest= INT8_MAX;
     for (int i=0;i<size;i++){
          if(num[i]<smallest)
          {
               smallest=num[i];
          }    
     }
     cout<<"smallest element is "<<smallest<<endl;
     return 0;
}