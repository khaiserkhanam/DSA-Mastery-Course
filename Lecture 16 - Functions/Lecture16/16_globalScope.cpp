#include<iostream>
using namespace std;
int x=100;
void show(){
    int a=10;
    cout<<"Inside show "<<a<<endl;
    cout<<"Inside show "<<x<<endl;
}
int main(){
    int a=11;
    show();
     cout<<"Inside main "<<a<<endl;
      cout<<"Inside show "<<x<<endl;
}