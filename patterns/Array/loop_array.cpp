#include<iostream>
using namespace std;
int main(){
     int size=5;
    int arr[size];

     cout<<"Enter the values of array :";
     for(int j=0;j<size;j++){
          cin>>arr[j];
     }
     cout<<endl;
    for (int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
     return 0;
}