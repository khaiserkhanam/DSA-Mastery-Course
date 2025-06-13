#include<iostream>
using namespace std;
int main(){
      int num;
    cout<<"Enter number :"<<endl;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i==3)
            continue;

        if(i==5)
            break;
        
        cout<<i<< " ";
    }
}