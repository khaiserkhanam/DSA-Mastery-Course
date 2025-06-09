#include<iostream>
using namespace std;
int main(){
        int number;
    cout<<"Enter Number: ";
    cin>>number;
    if(number>0){
        if(number%2==0){
            cout<<"Positive and Even";
        }else{
             cout<<"Positive and Odd";
        }
    }else{
         cout<<"Negative";
    }
}