#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    int mid=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==mid || j==mid){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}