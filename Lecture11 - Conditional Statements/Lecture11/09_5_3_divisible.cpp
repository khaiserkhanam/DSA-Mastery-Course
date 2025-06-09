#include<iostream>
using namespace std;
int main(){
     int number;
    cout<<"Enter Number: ";
    cin>>number;
    if(number%3==0 && number%5==0){
        cout<<"Divisible both by 3 and 5";
    }else if(number%3==0){
        cout<<"Divisible  by 3";
    }else if(number%5==0){
        cout<<"Divisible  by 5";
    }else{
        cout<<"Not Divisible  by both 3 and 5";
    }
}