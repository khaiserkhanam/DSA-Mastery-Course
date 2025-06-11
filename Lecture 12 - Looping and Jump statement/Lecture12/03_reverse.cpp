#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : "<<endl;
    cin>>n;
    for(int i=n;i>0;i--){
        cout<<i<<endl;
    }
cout<<"different "<<endl;
     for(int i=n;i>=1;i--){
        cout<<i<<endl;
    }
}