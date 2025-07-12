#include <iostream>
using namespace std;
int main(){
    // int *ptr=new int(10);
    // cout<<ptr<<endl;    
    // cout<<*ptr<<endl;    
    // cout<<sizeof(ptr)<<endl;

    for(int i=0;i<5;i++){
        int *x=new int(i);
        cout<<"i :"<<i<<" Address :"<<x<<endl;
        delete x;
    }
}