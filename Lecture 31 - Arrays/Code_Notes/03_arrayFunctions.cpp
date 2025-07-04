#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    cout<<"Printing Array"<<endl;
for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int nums[]={2,1};
    printArray(nums,2);
}