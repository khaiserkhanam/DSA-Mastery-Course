#include<iostream>
using namespace std;
void funcC(){
    cout<<"C"<<endl;
}
void funcB(){
    cout<<"B"<<endl;
    funcC();
}
void funcA(){
    cout<<"A"<<endl;
    funcB();
}
int main(){
    cout<<"Main"<<endl;
       funcA();
}