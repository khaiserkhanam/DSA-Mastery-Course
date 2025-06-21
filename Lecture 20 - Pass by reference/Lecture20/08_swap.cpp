#include <iostream>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=10,b=11;
    cout<<"Before: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After: "<<a<<" " <<b;
}