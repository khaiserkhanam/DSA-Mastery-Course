#include<iostream>
using namespace std;
inline int lesser(int a,int b){
    return (a<b)?a:b;
}
inline int square(int x){
    return x*x;
}
int main(){
    int a=5,b=23,result;
    result=lesser(a,b);
    cout<<result<<endl;
    a=a+2;
    b=b-21;
    result=lesser(a,b);
     cout<<result<<endl;
     result=square(a); //x*x
     cout<<result;
}