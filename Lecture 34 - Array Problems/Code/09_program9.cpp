#include<iostream>
using namespace std;
int main(){
     int arr[]={5,4,3,2,1};
      int n=sizeof(arr)/sizeof(arr[0]);
      int nums[n];

      for(int i=0;i<n;i++){
        nums[i]=arr[n-1-i];
      }
      cout<<"Printing Array"<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }

        cout<<"Reversed Array"<<endl;
      for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
      }
}