#include<iostream>
using namespace std;

int countLessThanX(int arr[],int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<x){
            count++;
        }
    }
    return count;
}
int main(){
 int arr[]={1,0,3,2,5,6,10};
 int x;
 cout<<"Enter number : "<<endl;
 cin>>x;
 int n=sizeof(arr)/sizeof(arr[0]);
 int result=countLessThanX(arr,n,x);
 cout<<"Number of elements less than "<<x<<"="<<result;
}