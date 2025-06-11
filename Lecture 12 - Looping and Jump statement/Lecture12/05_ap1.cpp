#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"enter number : "<<endl;
    cin>>n;
    //1st approach=Mathematics
    // for(int i=2;i<=2*n;i=i+2){
    //     cout<<i<<endl;
    // }

    //2nd approach
    int a=2;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
    }
}