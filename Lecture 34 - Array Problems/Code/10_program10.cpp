#include<iostream>
using namespace std;
int main(){
    //Wrong Approach
    //  int arr[]={5,4,3,2,1};
    //   int n=sizeof(arr)/sizeof(arr[0]);

    //   for(int i=0;i<n;i++){
    //     arr[i]=arr[n-1-i];
    //   }
    //   cout<<"Printing Array"<<endl;
    //   for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //   }

    //Right Approach
        int arr[]={5,4,3,2,1};
      int n=sizeof(arr)/sizeof(arr[0]);

      for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
      }
    cout<<"Reversed Array"<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
      }
}