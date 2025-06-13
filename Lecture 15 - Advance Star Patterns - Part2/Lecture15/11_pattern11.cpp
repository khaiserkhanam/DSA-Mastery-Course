#include <iostream>
using namespace std;
int main(){
       int n;
       char ch='A';
    cout<<"Enter rows: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
}