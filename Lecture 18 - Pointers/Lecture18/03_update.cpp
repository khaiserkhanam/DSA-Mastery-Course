#include <iostream>
using namespace std;
int main(){
    // int a=10;
    // a=a+2;
    // cout<<a<<endl;
    // int* ptr=&a;
    // cout<<*ptr<<endl;
    // *ptr=*ptr+2;
    // (*ptr)++;
    // cout<<a<<endl;
    // cout<<*ptr<<endl;

    //Example2:
    int num=5;
    int* ptr=&num;
    cout<<num<<endl;
    cout<<*ptr<<endl;
    *ptr=28;
    cout<<num<<endl;
    cout<<*ptr<<endl;

   
}
