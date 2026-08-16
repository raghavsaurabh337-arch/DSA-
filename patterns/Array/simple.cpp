#include<iostream>
using namespace std;
int main(){
    int arr[5]={23,45,68,45,76};
    arr[0]=10;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    // index start 0 to size-1
    cout<<"size of array is :"<<sizeof(arr)/sizeof(int)<<endl;
    cout<<sizeof(arr);

   
     return 0;
}