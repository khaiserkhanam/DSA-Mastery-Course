#include <iostream>
using namespace std;
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
}
int main(){
    int a=10,b=11;
    swap(a,b);
    cout<<"Main function"<<endl;
    cout<<"A "<<a<<endl;
    cout<<"B "<<b<<endl;
}