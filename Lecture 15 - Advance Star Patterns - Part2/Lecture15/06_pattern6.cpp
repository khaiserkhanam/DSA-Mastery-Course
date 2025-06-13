#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter rows: "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        //loop for spaces
        for(int j=1;j<=(num-i);j++){
            cout<<" ";
        }
        //loop for stars
        for(int k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1 || i==num){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}