#include<iostream>
using namespace std;
void show(){
    int a=10;
    cout<<"Inside show "<<a<<endl;
}
int main(){
    int a=11;
    show();
    cout<<a;
}