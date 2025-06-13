#include<iostream>
using namespace std;
int main(){
    int num,rem,reversed=0;
    cout<<"Enter number :"<<endl;
    cin>>num;
    while(num!=0){
        rem=num%10;
        reversed=reversed*10+rem;
        num=num/10;
    }
    cout<<"Reverse Number : "<<reversed;
}