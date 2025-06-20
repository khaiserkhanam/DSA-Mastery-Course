#include <iostream>
using namespace std;
void print(int *ptr){
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
int main(){
    int val=5;
    int* ptr=&val;
    cout<<val<<endl;
    cout<<*ptr<<endl;
    print(ptr);
}