#include<iostream>
using namespace std;
int main(){
    int a=9,b=10,c=8;
    if(a>b){
        if(a>c){
            cout<<a;
        }else{
            cout<<c;
        }
    }else{
        if(b>c){
            cout<<b;
        }else{
            cout<<c;
        }
    }
}