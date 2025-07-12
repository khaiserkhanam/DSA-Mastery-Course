#include<iostream>
using namespace std;
void printSum(int arr[],int n){
 int sum=0;
 for(int i=0;i<n;i++){
    sum+=arr[i];
 }
 cout<<"Sum of Array Elements : "<<sum;
}
int main(){
 int arr[]={2,3,5,7,10};
 int n=sizeof(arr)/sizeof(arr[0]);
 printSum(arr,n);

}