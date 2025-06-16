#include<iostream>
using namespace std;
void print(int i){
    cout<<"Hello world "<<i<<" times"<<endl;
}
void print(double d){
    cout<<"Hello world "<<d<<" times"<<endl;
}
void print(string e){
    cout<<"Hello world "<<e<<" times"<<endl;
}
using namespace std;
int main(){
    print(5);
    print(7.2);
    print("ten");
}