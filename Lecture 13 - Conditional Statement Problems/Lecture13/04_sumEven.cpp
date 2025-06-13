#include<iostream>
using namespace std;
int main(){
    int num,sum=0,lastDigit;
     cout<<"Enter number :"<<endl;
    cin>>num;
    while(num!=0){
        lastDigit=num%10;
        if(lastDigit%2==0){
            sum+=lastDigit;
        }
        num=num/10;

    }
    cout<<"sum of even digits : "<<sum;
}