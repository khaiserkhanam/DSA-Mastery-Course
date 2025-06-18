#include<iostream>
using namespace std;
bool prime(int num){
    if(num<=1) return false;
    for(int i=2;i<=num/2;i++){
        if(num%2==0){
            return false;
        }
    }
    return true;
}
int main(){
 int n;
 cout<<"Enter number: ";
 cin>>n;
 if(prime(n)){
    cout<<" Prime Number";
 }else{
    cout<<"Not  Prime Number";
 }
}