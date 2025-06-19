#include <iostream>
using namespace std;
int main(){
    int a=10;
    int* ptr=&a;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;
//8 bytes

float b=10.1;
    float* ptr1=&b;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(ptr1)<<endl;

    char ch='A';
     char* ptr2=&ch;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(ptr2)<<endl;
   
}
