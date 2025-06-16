#include<iostream>
using namespace std;
bool isEvenOdd(int a){
    if(a&1){
        //odd
        return 1;
    }else{
        return 0;
    }
}
int isEvenOdd(int a,int b){
    if(a&1){
        //odd
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"enter number: "<<endl;
    cin>>num;
    int result=isEvenOdd(num);
    if(result){
        cout<<"odd number";
    }else{
        cout<<"even number";
    }
}