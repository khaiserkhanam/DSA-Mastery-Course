#include<iostream>
using namespace std;
int reverseNum(int num){
    int reversed=0;
       while(num!=0){
        reversed=reversed*10+num%10;
        num=num/10;
    }
    return reversed;
}
int sumOfDigits(int num){
    int sum=0;
      while(num!=0){
        sum+=num%10;
        num=num/10;
    }
    return sum;
}
int main(){
 int n;
 cout<<"Enter n: ";
 cin>>n;
 cout<<"Reversed number :"<<reverseNum(n)<<endl;
 cout<<"sum of digits :"<<sumOfDigits(n)<<endl;
}