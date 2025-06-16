#include<iostream>
using namespace std;
int add(int a,int b){
    int sum=a+b;
    cout<<"Hello";
    return sum;
}
int main(){
    cout<<add(7,1)<<endl;
    int result1=add(5,2);
    cout<<result1<<endl;
    int result2=add(2,2);
    cout<<result2<<endl;
}