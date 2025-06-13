#include<iostream>
using namespace std;
int main(){
    int num,product=1;
    cout<<"Enter number :";
    cin>>num;
    for(int i=1;i<=num;i++){
        product*=i;
    }
    cout<<"Factorial of "<<num<<" is "<<product;
}