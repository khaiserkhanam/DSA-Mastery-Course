#include <iostream>
using namespace std;
void print(int *ptr){
    *ptr=*ptr+1;
    cout<<"Inside function: "<<*ptr<<endl;
}
int main(){
    int val=5;
    int* ptr=&val;
    cout<<"Before: "<<*ptr<<endl;
    print(ptr);
    cout<<"After: "<<*ptr<<endl;
}