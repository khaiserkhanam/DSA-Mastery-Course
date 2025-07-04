#include<iostream>
using namespace std;
int main(){
    int arr[10]={9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
}