#include<iostream>
using namespace std;
int pow(int base,int exponent){
    int result=1;
    for(int i=1;i<=exponent;i++){
        result*=base;
    }
    return result;
}
int main(){
    int base, exponent;
    cout<<"Enter Base: ";
    cin>>base;
    cout<<"Enter Exponent: ";
    cin>>exponent;
    int result=pow(base,exponent);
    cout<<base<<" power "<<exponent<<" is "<<result;
}