#include <iostream>
using namespace std;
void swap(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"A "<<*a<<endl;
    cout<<"B "<<*b<<endl;
}
int main(){
    int a=10,b=11;
    int* ptr1=&a;
    int* ptr2=&b;
    swap(ptr1,ptr2);
    cout<<"Main function"<<endl;
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
}