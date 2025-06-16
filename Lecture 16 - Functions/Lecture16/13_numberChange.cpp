#include<iostream>
using namespace std;
void changeValue(int a){
    a=a+6;
    a=a-1;
    cout<<"Inside changeValue "<<a<<endl;
}
int main(){
    int a=6;
    changeValue(a);
    a=a+10;
    a=a+1;
    cout<<"Inside main "<<a<<endl;
}