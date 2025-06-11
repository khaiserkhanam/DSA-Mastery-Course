#include<iostream>
using namespace std;
int main(){
     int balance;
    cout<<"Enter balance: ";
    cin>>balance;
    if(balance<1000){
        cout<<"Low balance";
    }else if(balance<=10000){
        cout<<"sufficient balance ";
    }else if(balance>10000){
        cout<<"High balance ";
    }
}