#include<iostream>
using namespace std;
int isArmstrong(int n){
    int original=n,sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return original==sum;
}
int main(){
 int n;
 cout<<"Enter n: ";
 cin>>n;
 if(isArmstrong(n)){
    cout<<"Armstrong number";
 }else{
     cout<<"Not Armstrong number";
 }
}