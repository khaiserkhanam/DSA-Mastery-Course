#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
     cout<<"Enter number :"<<endl;
    cin>>num;
    while(num!=0){
        // lastDigit=num%10;
        // num=num/10;
        // sum+=lastDigit;
        sum+=num%10;
        num=num/10;
    }
    cout<<sum;
}