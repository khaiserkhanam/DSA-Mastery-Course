#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
 int a,b;
 cout<<"Enter 2 numbers: ";
 cin>>a>>b;
 //gcd
cout<<"GCD : "<<gcd(a,b)<<endl;
 //lcm
cout<<"LCM : "<<lcm(a,b)<<endl;
}