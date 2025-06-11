#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    char op;
    cout<<"Enter operator : "<<endl;
    cin>>op;
    int num2;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    switch(op){
        case '+':
            cout<<(num1+num2);
            break;
         case '-':
            cout<<(num1-num2);
            break;
         case '*':
            cout<<(num1*num2);
            break;
         case '/':
            cout<<(num1/num2);
            break;
         case '%':
            cout<<(num1%num2);
            break;
        default: cout<<"Invalid Input";
    }
}