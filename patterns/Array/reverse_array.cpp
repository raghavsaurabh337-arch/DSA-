#include<iostream>
using namespace std;

void reverseArray(int arr[],int sz){
  int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
  //   int arr[5]={23,45,68,45,76};
  //   int size=5;
  //  for(int i=0;i<size;i++){
  //    cout<<arr[i]<<endl;
  //  }
  //  cout<<"reversed array";
  //  for(int i=size-1;i>=0;i--){
  //    cout<<arr[i]<<endl;
  //  } 
int arr[5]={23,455,68,45};
int sz=5;

reverseArray(arr,sz);

for(int i=0;i<sz;i++){
    cout<<arr[i]<<endl;
}

   
     return 0;
}