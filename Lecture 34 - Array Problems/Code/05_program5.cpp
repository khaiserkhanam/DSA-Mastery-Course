#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Printing Array : "<<endl;
  for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Updating Array : "<<endl;
    arr[2]=70;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}