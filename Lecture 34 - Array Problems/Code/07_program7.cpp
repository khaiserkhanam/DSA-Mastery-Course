#include<iostream>
using namespace std;
void updateArray(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=1;
        }else{
            arr[i]*=5;
        }
    }
}
void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}
int main(){
 int arr[]={1,2,3,4,5};
 int n=sizeof(arr)/sizeof(arr[0]);
 
 updateArray(arr,n);
 printArray(arr,n);

}