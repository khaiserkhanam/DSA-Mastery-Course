#include<iostream>
using namespace std;
int main(){
    int num,original,rem,reversed=0;
    cout<<"Enter number :"<<endl;
    cin>>num;
    original=num;
    while(num!=0){
        rem=num%10;
        reversed=reversed*10+rem;
        num=num/10;
    }
    if(original==reversed){
        cout<<"Palindrome Number";
    }else{
         cout<<"Not Palindrome Number";
    }
}