#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,45,68,45,76};
    int size=5;
   for(int i=0;i<size;i++){
     cout<<arr[i]<<endl;
   }
   cout<<"reversed array";
   for(int i=size-1;i>=0;i--){
     cout<<arr[i]<<endl;
   } 

   
     return 0;
}