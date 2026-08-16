#include<iostream>
using namespace std;
int main(){

     
     int num[]={23,4,768,34,65,32222,6};
     int size=8;
     int big= INT8_MIN;
     int index=-1;
     for (int i=0;i<size;i++){
          if(num[i]>big)
          {
             big=num[i];
               index=i;
             
          }    
     }
     cout<<"largest element is "<<big<<endl;
     cout<<"index is "<<index;
     return 0;
}